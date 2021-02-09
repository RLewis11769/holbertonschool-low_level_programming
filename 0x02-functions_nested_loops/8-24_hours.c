#include "holberton.h"

/**
 * jack_bauer - prints every number on clock
 * Return: 0
 */

void jack_bauer(void)
{
	int a, b, c;
	int d = 0;

	while (d <= 2)
	{
		for (c = 0; c <= 10; c++)
		{
			for (b = 0; b <= 5; b++)
			{
				for (a = 0; a <= 9; a++)
				{
					if ((d == 2) && (c > 3))
					{
						break;
					}
					    _putchar(d + '0');
					    _putchar(c + '0');
					    _putchar(':');
					    _putchar(b + '0');
					    _putchar(a + '0');
					    _putchar('\n');
				}
			}
		}
		d++;
	}
}
