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
	int w, h, length;
	int *ptr, **arr;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	length = (sizeof(int *) * width + sizeof(int) * width * height);
	arr = (int **)malloc(length);
	ptr = (int *)(arr + width);

	if (arr == 0)
		return (NULL);
	if (ptr == 0)
		return (NULL);

	for (w = 0; w < width; w++)
		arr[w] = (ptr + width * w);

	for (w = 0; w < width; w++)
		for (h = 0; h < height; h++)
			arr[h][w] = 0;

	return (arr);
}
