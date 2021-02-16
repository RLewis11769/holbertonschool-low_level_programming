#include "holberton.h"

/**
 * puts2 - prints every other character of string followed by newline
 * @str: string to be printed
 */

void puts2(char *str)
{
	int n;
	int length = 0;

	while (str[length] != '\0')
		length++;

	for (n = 0; n < length; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
