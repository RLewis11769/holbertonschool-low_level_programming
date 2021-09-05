#include "holberton.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to string
 */

void _print_rev_recursion(char *s)
{
	int c = 0;

	/* Base condition returns when reaches end of string */
	if (s[c] == '\0')
		return;

	/* Passes next character into function until reaches end of string */
	_print_rev_recursion(s + 1);
	/* Starts printing from end of string */
	_putchar(s[c]);
}
