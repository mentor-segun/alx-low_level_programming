#include "main.h"

/**
 * create_file - Function creates a file
 *
 * @filename: Name of file to create
 * @text_content: Text content to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, r_value, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		r_value = write(fd, text_content, len);
		if (r_value == -1 || r_value != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
