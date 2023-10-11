#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a given number
 *
 * @q: The number whose last digit needs to be printed.
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int q)
{
	int last_digit;

	if (q < 0)
		last_digit = -q % 10;
	else
		last_digit = q % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
