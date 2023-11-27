#include "main.h"

/**
 * read_textfile - Function reads text file and
 *		prints it to the POSIX standard output
 *
 * @filename: Name of file to read
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters it reads and prints
 *		0 if the file can not be opened or read,
 *		or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byte_rd, byte_wr;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	byte_rd = read(fd, buff, letters);
	if (byte_rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	byte_wr = write(STDOUT_FILENO, buff, byte_rd);
	if (byte_wr == -1 || byte_wr != byte_rd)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (byte_wr);
}
