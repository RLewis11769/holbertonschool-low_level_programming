#include "holberton.h"

int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}

int pal(char *s, char first, char last)
{
	if (last == 0)
		return (1);
	if (first != last)
		return (0);
	else
		return (pal(s, first + 1, last - 1));
}

/**
 * is_palindrome - determines if string is palindrome or not
 * @s: pointer to string to analyze
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	return (pal(s, 0, length(s)));
}
