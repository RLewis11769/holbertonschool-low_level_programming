#include "holberton.h"

/**
 * _isalpha - checks for letters
 * Return: 1 if c is letter, 0 if not letter
 * @c: character to check
 */

int _isalpha(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
