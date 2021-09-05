#include "holberton.h"

/**
 * _strlen_recursion - returns length of string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	/* Base condition passes back 0 when reaches end of string */
	if (s[c] == '\0')
		return (0);

	/* Adds 1 on each iteration when reaches end of string */
	return (1 + _strlen_recursion(s + 1));
}
