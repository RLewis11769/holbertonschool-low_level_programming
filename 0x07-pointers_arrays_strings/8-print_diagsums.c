#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals of matrix
 * @a: pointer to 2d array
 * @size: 2 digits, with 1 for the size of each array
 */

void print_diagsums(int *a, int size)
{
	int r, c;
	int LRsum = 0;
	int RLsum = 0;

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			if (r == c)
			{
				LRsum += a[c] + a[size + 1];
				continue;
			}
			if ((r + c) == (size - 1))
			{
				RLsum += a[r];
				continue;
			}
		}
	}
	printf("%d, %d\n", LRsum, RLsum);
}
