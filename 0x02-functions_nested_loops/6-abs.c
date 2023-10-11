#include "main.h"

/**
 * _abs - This function computes the absolute value of a given integer
 * @q: The integer whose absolute value is to be computed
 *
 * Return: The absolute value of the integer.
 */

int _abs(int q)
{
	if (q < 0)
		return (-q);
	return (q);
}
