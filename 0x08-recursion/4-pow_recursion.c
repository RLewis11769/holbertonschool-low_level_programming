#include "holberton.h"

/**
 * _pow_recursion - returns x raised to y
 * @x: number to be multiplied to itself
 * @y: power to be raised to
 * Return: value of x raised to y if postive, -1 to indicate error if negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
