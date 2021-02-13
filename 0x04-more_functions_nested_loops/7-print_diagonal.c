#include "holberton.h"

/**
 * print_diagonal - draws diagonal line in terminal
 * @n: number of times \ is printed
 * Return: 0 if successful
 */

void print_diagonal(int n)
{
	int d, a;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (a = 0; a < n; a++)
			{
				if (a == d)
					_putchar('\\');
				else if (a < d)
					_putchar(' ');
				else if (a > d + 1)
					_putchar('\n');
				else
					break;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
