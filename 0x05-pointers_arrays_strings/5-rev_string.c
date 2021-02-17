#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	unsigned char x = 0;
	unsigned char y = 0;
	char c;

	while (s[length] != '\0')
		length++;

	y = (length - 1);

	while (x < y)
	{
		c = s[y];
		s[y] = s[x];
		s[x] = c;
		x++;
		y--;
	}

	_putchar(s[length]);
}
