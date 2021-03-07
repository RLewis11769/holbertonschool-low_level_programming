#include "holberton.h"

/**
 * print_square - prints square of #
 * @size: length of each side of square
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
