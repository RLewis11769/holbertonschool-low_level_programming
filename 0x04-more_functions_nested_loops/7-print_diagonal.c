#include "holberton.h"

/**
 * print_diagonal - draws diagonal line in terminal
 * @n: number of lines where \ is printed and number of times to print it
 */

void print_diagonal(int n)
{
	int d, a;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			/* Space before \ */
			for (a = 0; a < d; a++)
				_putchar(' ');
			_putchar('\\');
			/* Newline after \ */
			if (d < n)
				_putchar('\n');
		}
	_putchar('\n');
	}
}
