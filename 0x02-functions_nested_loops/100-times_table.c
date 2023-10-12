#include "main.h"
#include <stdio.h>

/**
 * print_times_table - This function prints the n times table
 *
 * @n: The times table to print (0 <= n <= 15)
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)

				printf("%d", result);

			else
			{
				printf(", ");
				if (result < 10)
					printf("  ");
				else if (result < 100)
					printf(" ");
				printf("%d", result);
			}
		}
		printf("\n");
	}
}
