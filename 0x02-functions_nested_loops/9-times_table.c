#include "holberton.h"

/**
 * times_table - prints multiplication table for 9
 */

void times_table(void)
{
	int row, col;
	int result;

	for (col = 0; col < 10; col++)
	{
		for (row = 0; row < 10; row++)
		{
			result = row * col;
			/* Spacing and number for single digit numbers */
			if (row != 0 && result < 10)
				_putchar(' ');
			if (result < 10)
				_putchar(result + '0');
			/* First and second digit of 2-digit numbers */
			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (row < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
