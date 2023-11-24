#include "main.h"

/**
 * clear_bit - Function clears value of bit to 0 at given index
 *
 * @n: Pointer to number to clear the bit within
 * @index: Index of bit, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
