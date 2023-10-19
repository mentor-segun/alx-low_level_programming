#include "main.h"

/**
 * _strncpy - copies a string with a given maximum length
 * @dest: destination string
 * @src: source string
 * @n: maximum length of characters to copy
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (ptr);
}
