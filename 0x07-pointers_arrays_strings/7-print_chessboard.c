#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of a substring in a string.
 *
 * @haystack: The string to search within.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack;
	char *start_needle;

	while (*haystack)
	{
		start_haystack = haystack;
		start_needle = needle;

		while (*haystack && *start_needle && *haystack == *start_needle)
		{
			haystack++;
			start_needle++;
		}

		if (!*start_needle)
			return (start_haystack);

		haystack = start_haystack + 1;
	}

	return (NULL);
}

