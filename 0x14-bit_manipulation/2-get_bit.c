#include "main.h"

/**
 * get_bit - Function returns value of bit at given index
 *
 * @n: Number to find bit
 * @index: Index of bit, starting from 0
 *
 * Return: Value of bit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((int)((n >> index) & 1));
}
