#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	int x;
	char c;

	while (s[length] != '\0')
		length++;

	for (x = 0; x < length / 2; x++)
	{
		c = s[x];
		s[x] = s[length - 1 - x];
		s[length - 1 - x] = c;
	}
}
