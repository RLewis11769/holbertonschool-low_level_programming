#include "holberton.h"

/**
 * _isalpha - checks for letters
 * Return: 1 if c is letter, 0 is number
 * @c: First operand
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
