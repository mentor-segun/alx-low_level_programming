#include "main.h"

/**
 * _pow_recursion - This function calculates the value of x
 *			raised to the power of y using recursion
 *
 * @x: The base
 * @y: The power
 *
 * Return: The result of x raised to power y
 *		If y is less than 0, return -1
 */
int _pow_recursion(int x, int y)
{
	/* Check if y is lower than 0 */
	if (y < 0)
		return (-1);

	/* Base case */
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
