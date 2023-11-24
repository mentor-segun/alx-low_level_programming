#include "main.h"

/**
 * set_bit - Function set value of bit to 1 at given index
 *
 * @n: Pointer to number to set the bit within
 * @index: Index of bit, starting from 0
 *
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
