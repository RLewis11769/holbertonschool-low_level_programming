#include "holberton.h"

/**
 * print_number - prints integers
 * @n: integer to be printed
 */

void print_number(int n)
{
	int max = 2147483647;
	int x;
	int orig = n;
	int rem = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		orig = n;
	}

	for (x = 0; x <= max; x++)
	{
		if (n < 10)
		{
			_putchar((n % 10) + '0');
			break;
		}
		else if (n >= 10 && n < 100)
		{
			_putchar((n / 10) + '0');
			n = n % 10;
		}
		else if (n >= 100)
		{
			if (n >= 100 && n < 1000)
			{
				n = n / 10;
				continue;
			}
			else
			{
				rem = n % 100;
				n = n / 10;
				continue;
			}
		}
		else
		{
			_putchar((n % 10) + '0');
			break;
		}
	}
	if (orig > 100 && orig < max)
	{
		_putchar(rem / 10 + '0');
		_putchar(rem % 10 + '0');
	}
}
