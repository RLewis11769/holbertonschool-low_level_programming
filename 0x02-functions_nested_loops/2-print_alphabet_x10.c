#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet to stdout 10 times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int column, row;

	for (column = 0; column < 11; column++)
	{
		for (row = 'a'; row <= 'z'; row++)
		{
			_putchar(row);
		}
		_putchar('\n');
	}
}