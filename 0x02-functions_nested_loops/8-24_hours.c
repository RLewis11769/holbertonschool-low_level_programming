#include "holberton.h"

/**
 * jack_bauer - prints every number on clock 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 00; hour < 24; hour++)
	{
		for (min = 00; min < 60; min++)
		{
			/* First and second digit of hour */
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			/* First and second digit of minute */
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
