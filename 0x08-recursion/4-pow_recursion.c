#include "holberton.h"

/**
 * _pow_recursion - returns x raised to y
 * @x: number to be multiplied to itself
 * @y: power to be raised to
 * Return: value of x raised to y if postive or -1 for error if negative
 */

int _pow_recursion(int x, int y)
{
	/* If y is negative, returns -1 to indicate error */
	if (y < 0)
		return (-1);

	/* Base condition passes back 1 when reaches 0 */
	if (y == 0)
		return (1);

	/* Muliplies x by itself y times */
	return (x * _pow_recursion(x, y - 1));
}
