#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free grid
 *
 * @grid : array to be freed
 * @height : height of the grid
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
