#include "main.h"

/**
 * factorial - This function calculates the factorial
 *		of a given number using recursion
 *
 * @n: The number for which you want to find the factorial
 *
 * Return: The factorial of n
 *	If n is less than 0, return -1 to indicate error
 */
int factorial(int n)
{
	/* Check if n is lower than 0 */
	if (n < 0)
		return (-1);

	/* Base case */
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
