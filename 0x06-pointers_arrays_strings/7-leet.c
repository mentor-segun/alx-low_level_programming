#include "main.h"

/**
 * leet - Function encodes string into 1337 (leet) text.
 * @str: The input string
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_dict[] = "aAeEoOtTlL";
	char leet_replacements[] = "44370171";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_dict[j] != '\0'; j++)
		{
			if (str[i] == leet_dict[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (str);
}
