#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a given number
 *
 * @n: The number whose last digit needs to be printed.
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -n % 10;
	else
		last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}