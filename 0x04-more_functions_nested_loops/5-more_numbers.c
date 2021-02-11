#include "holberton.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: 0 if successful
 */

void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c < 10)
			{
				_putchar(c + '0');
			}
			else
			{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
