#include "holberton.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int column, row;

	for (column = 0; column < 10; column++)
	{
		for (row = 'a'; row <= 'z'; row++)
			_putchar(row);
		_putchar('\n');
	}
}
