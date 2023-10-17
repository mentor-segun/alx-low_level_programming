#include "main.h"

/**
 * _atoi - This converts a string to an integer
 * @s: The input string
 *
 * Return: The integer value of the string, or 0 if no valid integer is found.
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
