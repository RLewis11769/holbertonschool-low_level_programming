#include "holberton.h"

/**
 * print_times_table - prints n times table
 * @n: number between 0 and 15 to do times table of
 * Return: 0 if successful
 */

void print_times_table(int n)
{
	int row, col;
	int result;

	if ((n >= 0) && (n < 16))
	{
		for (col = 0; col <= n; col++)
		{
			for (row = 0; row <= n; row++)
			{
				result = row * col;
				if (row != 0 && result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (result < 10)
					_putchar(result + '0');
				if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				if (result >= 100)
				{
					_putchar(result / 100 + '0');
					_putchar(result / 10 % 10 + '0');
					_putchar(result % 10 + '0');
				}
				if (row < n)
				{
					_putchar(',');
					_putchar(' ');
				}

			}
			_putchar('\n');
		}
	}
}
