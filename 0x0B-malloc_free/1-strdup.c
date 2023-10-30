#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a new string
 *		which is a duplicate of the string str
 *
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string,
 *		NULL on failure or if str is NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';

	return (duplicate);
}
