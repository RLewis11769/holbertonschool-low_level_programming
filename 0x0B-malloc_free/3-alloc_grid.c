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
	int w, h;
	int **arr = (int **)malloc(width * sizeof(int *));

	if (arr == 0)
		return (NULL);
	if ((width <= 0) || (height <= 0))
		return (NULL);

	for (h = 0; h < height; h++)
		arr[h] = (int *)malloc(height * sizeof(int));

	for (w = 0; w < width; w++)
		for (h = 0; h < height; h++)
			arr[h][w] = 0;

	return (arr);
}
