#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function creates an array of integers from min to max
 * @min: Minimum value which is also included
 * @max: Maximum value which is also included
 *
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
