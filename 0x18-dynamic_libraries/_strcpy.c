#include "main.h"

/**
 * _strcpy - Copies a string (including the null byte) from source to destination.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: The pointer to the destination buffer @dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return original_dest;
}
