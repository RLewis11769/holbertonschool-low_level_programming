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

	if (length % 2 != 0)
	{
		for (n = (length - 1) / 2; n < length; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = length / 2; n < length; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
