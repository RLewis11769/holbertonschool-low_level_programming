#include "holberton.h"

/**
 * print_triangle - prints triangle of #
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int d, a, x;

	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			/* Print spaces */
			for (a = size; a > d; a--)
				_putchar(' ');
			/* Print # */
			for (x = 0; x < d; x++)
				_putchar('#');
			/* Newline after */
			if (d < size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
