#include "holberton.h"

/**
 * _isupper - checks for uppercase letters
 * @c: integer to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
