#include "main.h"

/**
 * _strspn - Function calculates the length of a prefix substring.
 *
 * @s: A pointer to the string to be checked.
 * @accept: Pointer to the string containing characters to be matched.
 *
 * Return: Number of bytes in the initial segment of s consisting
 *		only of bytes that are in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}
		if (found == 0)
			break;
		count++;
		s++;
		accept = accept - count;
	}

	return (count);
}
