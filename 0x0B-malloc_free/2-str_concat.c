#include "main.h"
#include <stdlib.h>

/**
 * _strlen - This function returns the length of a string
 *
 * @str: the string
 * Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * str_concat - This function concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to a newly allocated space in memory
 *		containing s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		concat[i] = s2[j];
		i++;
	}

	concat[i] = '\0';

	return (concat);
}
