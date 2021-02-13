#include "holberton.h"

/**
 * print_square - draws diagonal line in terminal
 * @size: number of times # is printed
 */

void print_square(int size)
{
	int d, a;

	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			for (a = 0; a < size; a++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
