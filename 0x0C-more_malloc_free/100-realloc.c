#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Function reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the old memory allocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: The pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *old_ptr = ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)new_ptr + i) = *(old_ptr + i);

	free(ptr);

	return (new_ptr);
}
