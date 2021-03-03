#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D grid previously created
 * @grid: grid created by alloc_grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	(void)height;
	free(grid);
}
