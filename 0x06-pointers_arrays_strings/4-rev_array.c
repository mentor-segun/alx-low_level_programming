#include "main.h"

/**
 * reverse_array - Function reverses content of an integer array
 * @a: The array to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
