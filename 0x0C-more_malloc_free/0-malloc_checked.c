#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocated_memory = malloc(b);

	if (allocated_memory == NULL)
	{
		exit(98);
	}

	return (allocated_memory);
}
