#include <unistd.h>

/**
 * _putchar - This function writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on succes and -1 if error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
