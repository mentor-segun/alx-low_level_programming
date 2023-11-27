#include "main.h"

/**
 * append_text_to_file - Function appends text to end of file
 *
 * @filename: Name of file
 * @text_content: Text to append to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r_value, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
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
