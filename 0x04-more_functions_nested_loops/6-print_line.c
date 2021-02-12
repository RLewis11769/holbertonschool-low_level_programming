#include "holberton.h"

/**
 * print_line - draws straight line in terminal
 * @n: number of times _ is printed
 *
 * Return: 0 if successful
 */

void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
		if (x > 0)
			_putchar('_');
	_putchar('\n');
}
