#include "main.h"
#include <stdlib.h>

/**
* free_grid - this function frees a 2 simensional array grid
* created in the previous alloc_grid function
* @grid: the 2D array to be freed
* @height: the number of rows of the 2D array
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
