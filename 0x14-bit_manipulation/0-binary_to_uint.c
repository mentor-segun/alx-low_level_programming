#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Function converts binary number to unsigned int
 * @b: String of 0 and 1 chars
 *
 * Return: The converted number, or 0 if:
 *		there is one or more chars in the string b that is not 0 or 1
 *		b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal = decimal * 2 + (b[i] - '0');
		i++;
	}

	return (decimal);
}
