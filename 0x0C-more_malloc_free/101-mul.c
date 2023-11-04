#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - This function calculates the length of a string
 *
 * @str: The string whose length is to be calculated
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _isNumber - This function checks if a string contains only digits
 *
 * @str: The string to check for digits
 *
 * Return: 1 if all the characters are digits,
 *		or 0 if a non-digit character exists
 */
int _isNumber(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * multiply - This function multiplies two numbers
 *
 * @num1: First number to be multiplied
 * @num2: Second number to be multiplied
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result, i, j, carry, n1, n2, sum;

	if (len1 == 0 || len2 == 0 || !_isNumber(num1) || !_isNumber(num2))
	{
		printf("Error\n");
		exit(98);
	}

	result = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (n1 * n2) + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry > 0)
			result[i + j + 1] += carry;
	}

	/* To Skip leading zeros in the result */
	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	/* Display the result */
	for (; i < len1 + len2; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
}

/**
 * main - check the code
 *
 * @argc: First numnber
 * @argv: Second number
 * Return: Error 98 if input is incorrect or composed of digits
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
