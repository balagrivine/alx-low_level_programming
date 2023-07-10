#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory previously allocated to alloc_grid
 * @height: number of rows
 * @grid: grid to be freed
 * Return: void
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
