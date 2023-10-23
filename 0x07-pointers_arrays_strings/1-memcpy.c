#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src
 *		to memory area dest
 *
 * @dest: A pointer to destination memory area where the data will be copied
 * @src: A pointer to source memory area from which the data will be copied
 * @n: Number of bytes to copy from the source to the destination
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

