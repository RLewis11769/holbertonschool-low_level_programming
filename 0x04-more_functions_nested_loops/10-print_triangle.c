#include "holberton.h"

/**
 * print_triangle - prints triangle of #
 * @size: integer in size of triangle
 *
 * Return: 0 if successful
 */

void print_triangle(int size)
{
	int d, a, bl;

	if (size > 0)
		for (d = 0; d < size; d++)
		{
			for (bl = 0; bl < size - d; bl++)
				_putchar(' ');
			for (a = 0; a <= d; a++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
