#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Function converts lowercase letters in string to uppercase
 * @str: The string
 *
 * Return: A pointer to the converted string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}
