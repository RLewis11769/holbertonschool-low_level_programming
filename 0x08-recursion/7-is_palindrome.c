#include "holberton.h"

/**
 * length - calculates length of string
 * @s: pointer to string to analyze
 * Return: length of string
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
 * pal - determines if string is palindrome
 * @s: string to check
 * @first: first integer
 * @last: last integer
 * Return: 1 if palindrome, 0 if not
 */

int pal(char *s, int first, int last)
{
	if (last == 0)
		return (1);
	if (*(s + first) != *(s + last))
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
	return (pal(s, 0, length(s) - 1));
}
