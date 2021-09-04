#include "holberton.h"

/**
 * puts_half - prints second half of string followed by newline
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int n;
	int length = 0;

	while (str[length] != '\0')
		length++;

	/* If string is odd, add 1 to length to round down number of chars to print */
	/* Meaning 12345 will print 45, not 345 */
	if (length % 2 != 0)
	{
		for (n = (length + 1) / 2; n < length; n++)
			_putchar(str[n]);
	}
	/* If string is even, start printing at second half of string */
	else
	{
		for (n = length / 2; n < length; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
