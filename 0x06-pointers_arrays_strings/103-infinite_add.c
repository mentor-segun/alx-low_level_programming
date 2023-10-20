#include "main.h"

/**
 * infinite_add - Add two numbers represented as strings.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result does not fit in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r || len2 > size_r)
		return (0);

	r[size_r] = '\0';
	len1--;
	len2--;

	for (int i = size_r - 1; len1 >= 0 || len2 >= 0 || carry; i--)
	{
		int sum = carry;

		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';

		carry = sum / 10;
		r[i] = (sum % 10) + '0';

		if (len1 >= 0)
			len1--;
		if (len2 >= 0)
			len2--;
	}

	if (r[0] == '0')
		return r + 1;
	else
		return r;
}
