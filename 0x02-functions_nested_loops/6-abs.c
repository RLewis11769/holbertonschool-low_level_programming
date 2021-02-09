#include "holberton.h"

/**
 * _abs - computes absolute value of integer
 * Return: absolute value
 * @r: first operand
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
