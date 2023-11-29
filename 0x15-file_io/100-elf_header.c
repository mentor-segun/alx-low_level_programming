#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

/**
 * print_elf_info - Function prints information from the ELF header
 *
 * @header: Pointer to ELF header
 */
void print_elf_info(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("	Magic:	");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x", header->e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
	printf("	Class:		%s\n", header->e_ident[EI_CLASS]
			== ELFCLASS64 ? "ELF64" : "ELF32");
	printf("	Data:		%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB
			? "2's complement, little endian" : "2's complement, big endian");
	printf("	Version:	%d (current)\n", header->e_ident[EI_VERSION]);
	printf("	OS/ABI:		%s\n", header->e_ident[EI_OSABI]
			== ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("	ABI Version:	%d\n", header->e_ident[EI_ABIVERSION]);
	printf("	Type:		%s\n", header->e_type
			== ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("	Entry point address:	0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 1 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	ssize_t bytes_read;
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return (98);
	}

	bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read < (ssize_t)sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		return (98);
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		return (98);
	}

	print_elf_info(&header);
	close(fd);
	return (0);
}
