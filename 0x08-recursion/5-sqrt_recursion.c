#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - This function calculates the natural square root
 *			of a number using recursion
 *
 * find_sqrt - This is a helper function to find
 *		the square root using recursion
 *
 * @n: The number to find the square root
 *
 * Return: The natural square root of n
 *		If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	/* Base Case */
	if (n == 0)
		return (n);

	if (n == 1)
		return (n);

	/* Helper function */
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - This is a helper function to find
 *		the square root using recursion
 *
 * @n: The number to find the square root
 * @x: The square root guess
 *
 * Return: The natural square root of n, or -1 if not found.
 */
int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (find_sqrt(n, x + 1));
}
