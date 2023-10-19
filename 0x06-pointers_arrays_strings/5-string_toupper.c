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
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return str;
}
