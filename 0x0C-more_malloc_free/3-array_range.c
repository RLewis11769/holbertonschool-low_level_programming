#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum number of values
 * @max: maximum number of values
 * Return: pointer to array or NULL
 */

int *array_range(int min, int max)
{
	int x;
	int c = 0;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (x = min; x <= max; x++, c++)
		p[c] = x;

	return (p);
}
