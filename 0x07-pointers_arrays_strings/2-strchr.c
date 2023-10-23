#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function returns a pointer to the first
 *		occurrence of the character c in the string s
 *
 * @s: A pointer to the string whose character is to be located
 * @c: The character to find in the string
 *
 * Returns: Pointer to the first occurence of c,
 * or NULL if the character is not found
 * 
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}


	return (NULL);
}
