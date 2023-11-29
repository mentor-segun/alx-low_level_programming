#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void error_97(char *message);
void error_98(char *message, char *filename);
void error_99(char *message, char *filename);
void error_100(int fd);

/**
 * main - Function copies the content of a file to another
 *
 * @argc: Count of argument
 * @argv: Argument vector passed
 *
 * Return: 1 on success, otherwise exit
 */
int main(int argc, char **argv)
{
	int source, destination, byte_rd, byte_wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_97(argv[0]);

	source = open(argv[1], O_RDONLY);
	if (source == -1)
		error_98("Error: Can't read from file", argv[1]);

	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (destination == -1)
		error_99("Error: Can't write to", argv[2]);

	do {
		byte_rd = read(source, buffer, BUFFER_SIZE);
		if (byte_rd == -1)
			error_98("Error: Can't read from file", argv[1]);

		byte_wr = write(destination, buffer, byte_rd);
		if (byte_wr == -1 || byte_wr != byte_rd)
			error_99("Error: Can't write to", argv[2]);
	} while (byte_rd == BUFFER_SIZE);

	if (close(source) == -1)
		error_100(source);
	if (close(destination) == -1)
		error_100(destination);

	return (0);
}

/**
 * error_97 - Function prints error message for incorrect argument count
 *		and exits with code 97
 *
 * @message: Error message
 */
void error_97(char *message)
{
	dprintf(STDERR_FILENO, "%s Usage: %s file_from file_to\n", message, message);
	exit(97);
}

/**
 * error_98 - Function prints error message for read failure
 *		and exits with code 98
 *
 * @message: Error message
 * @filename: Name of file causing error
 */
void error_98(char *message, char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(98);
}

/**
 * error_99 - Function prints error message for write failure
 *		and exits with code 99
 *
 * @message: Error message
 * @filename: Name of the file causing the error
 */
void error_99(char *message, char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(99);
}

/**
 * error_100 - Function prints error message for close failure
 *		and exits with code 100
 *
 * @fd: File descriptor causing error
 */
void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
