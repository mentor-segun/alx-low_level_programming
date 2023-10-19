#include "main.h"

/**
 * is_separator - Function checks if character is a word separator
 * @c: The character to be checked
 * Return: 1 if separator, 0 if not.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - Function capitalizes first letter of strings
 * @str: The input string
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && is_separator(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		capitalize_next = 0;
	}
		else
		{
			capitalize_next = 0;
		}
	}

	return (str);
}
