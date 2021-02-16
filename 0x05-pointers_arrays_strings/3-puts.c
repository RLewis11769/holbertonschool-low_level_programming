#include "holberton.h"

/**
 * _puts - prints string followed by newline
 * @str: string to be printed
 */

void _puts(char *str)
{
	int x;
	int length = 0;

	while(str[length] != '\0')
		length++;

	for(x = 0; x < length; x++)
		_putchar(str[x]);
	_putchar('\n');
}
