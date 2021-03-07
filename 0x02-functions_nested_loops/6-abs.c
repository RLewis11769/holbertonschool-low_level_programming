#include "holberton.h"

/**
 * _abs - computes absolute value of integer
 * Return: absolute value
 * @r: number to find absolute value of
 */

int _abs(int r)
{
	if (r < 0)
		r = -r;

	return (r);
}
