#include "holberton.h"

/**
 * print_times_table - prints n times table
 * @n: number between 0 and 15 to do times table of
 * Return: 0 if successful
 */

void print_times_table(int n)
{
	int d, a;

	if ((n > 0) && (n < 16))
	{
		for (d = 0; d <= n; d++)
		{
			for (a = 0; a <= n; a++)
			{
				if (a * d >= 100)
					_putchar((a * d) / 100 + '0');
				if (a * d >= 10)
					_putchar((a * d) / 10 % 10 + '0');
				_putchar((a * d) % 10 + '0');
				if (a < n)
				{
					_putchar(',');
					if (((a * d) >= 0) && ((a * d) <= 9))
					{
						_putchar(' ');
						_putchar(' ');
					}
					if (((a * d) >= 10) && ((a * d) < 100))
					{
						_putchar(' ');
					}
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
