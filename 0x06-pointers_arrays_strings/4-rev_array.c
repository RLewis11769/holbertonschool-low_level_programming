#include "holberton.h"

/**
 * reverse_array - reverse content of array of integers
 * @a: pointer to array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int x;
	int start = 0;
	int end = n - 1;

	for (; start < end; start++, end--)
	{
		x = a[start];
		a[start] = a[end];
		a[end] = x;

/*		if (x != start)
		{
			_putchar(',');
			_putchar(' ');
			}*/
	}
}
