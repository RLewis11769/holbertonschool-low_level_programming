#include "holberton.h"

/**
 * _islower - checks for lowercase characters
 * Return: 1 if c is lowercase, 0 is capital
 * @c: First operand
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
