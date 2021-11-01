#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates 2D array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid, or NULL
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **arr;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	/* Allocate memory for each row */
	for (x = 0; x < height; x++)
	{
		/* Allocate memory for each column */
		arr[x] = malloc(sizeof(int) * width);
		/* If malloc fails at any point, free all memory */
		if (arr[x] == NULL)
		{
			/* Free memory for each row */
			for (; x >= 0; x--)
				free(arr[x]);
			/* Free memory for array in general */
			free(arr);
			return (NULL);
		}

		/* Initialize each element of grid to 0 */
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}

	return (arr);
}
