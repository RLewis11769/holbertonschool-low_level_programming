#include <stdlib.h>

/**
 * array_range - creates array of integers from min to max
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to array or NULL
 */

int *array_range(int min, int max)
{
	int x;
	int c = 0;
	int *arr;

	if (min > max)
		return (NULL);

	/* Allocates for all number min to max (including both) */
	/* 3 to 7 would be 3, 4, 5, 6, 7 (5 numbers) */
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	/* Start at min, go to max (inclusive) */
	for (x = min; x <= max; x++)
	{
		arr[c] = x;
		c++;
	}

	return (arr);
}
