#include <unistd.h>

/**
 * _putchar - Write a character to the standard output (stdout)
 *
 * @c: The character to print
 *
 * Return: The number of characters written, which is always 1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

