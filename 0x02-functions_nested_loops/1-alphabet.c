#include "holberton.h"

/**
 * print_alphabet - prints alphabet to stdout
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
