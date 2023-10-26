#include "main.h"

/**
 * _strlen_recursion - This function returns the length
 *			of a string using recursion
 *
 * @s: The string to find the length
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
