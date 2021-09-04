#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	int x;
	char temp;

	while (s[length] != '\0')
		length++;

	for (x = 0; x < length / 2; x++)
	{
		/* Basic swap of characters */
		/* temp is the temporary variable */
		/* s[x] is the first character */
		/* s[length - x - 1] is the last character */
		/* Continues swapping until middle where first/last meet */
		temp = s[x];
		s[x] = s[length - 1 - x];
		s[length - 1 - x] = temp;
	}
}
