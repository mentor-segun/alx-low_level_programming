#include <unistd.h>

/**
 * _putchar - Function writes a character to stdout
 *
 * @c: character to print
 *
 * Return: 1 on success, -1 on error and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
