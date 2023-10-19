#include "main.h"

/**
 * rot13 - Encode a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			char base = (str[i] >= 'a') ? 'a' : 'A';

			str[i] = base + ((str[i] - base + 13) % 26);

		}
	}

	return (str);
}
