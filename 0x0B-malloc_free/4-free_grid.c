#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function frees a 2-dimensional grid
 *		previously created by the alloc_grid function
 *
 * @grid: grid
 * @height: height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
