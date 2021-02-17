#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array followed by newline
 * @a: array to be printed
 * @n: number of elements in array
 */

void print_array(int *a, int n)
{
	int x;

	if (n <= 0)
		return;

	for (x = 0; x < n; x++)
	{
		if (x < n - 1)
			printf("%d, ", *(a + x));
		else
			printf("%d\n", *(a + (n - 1)));
	}
}
