#include "holberton.h"

/**
 * _abs - computes absolute value of integer
 * @n: number to find absolute value of
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;

	return (n);
}
