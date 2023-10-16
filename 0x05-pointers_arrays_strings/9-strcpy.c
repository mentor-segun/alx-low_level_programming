#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: the destination buffer where the string is copied.
 * @src: the source string to be copied.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
