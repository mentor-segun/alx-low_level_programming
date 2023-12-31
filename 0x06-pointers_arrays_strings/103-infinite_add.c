#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer r.
 *
 * Return: A pointer to the result
 * or 0 if the result cannot be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, j, k = 0, carry = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k++)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;
		r[k] = sum % 10 + '0';

		if (k >= size_r)
			return (0);
	}

	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}
