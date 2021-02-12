#include "holberton.h"

/**
 * print_triangle - prints triangle of #
 * @size: integer in size of triangle
 *
 * Return: 0 if successful
 */

void print_triangle(int size)
{
	int d, a;

	for (d = 1; d >= size; d++)
	{
		for (a = 1; a >= d; a++)
		{
			_putchar(' ');
			_putchar('\n');
		}
		_putchar('#');
	}
}
