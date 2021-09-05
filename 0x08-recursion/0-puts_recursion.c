#include "holberton.h"

/**
 * _puts_recursion - prints string
 * @s: pointer to string
 */

void _puts_recursion(char *s)
{
	int c;

	/* Base condition prints newline when reaches end of string */
	if (s[c] == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Prints character */
	_putchar(s[c]);
	/* Passes next character into function until reaches end of string */
	_puts_recursion(s + 1);
}
