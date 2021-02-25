#include "holberton.h"

/**
 *sqr - calculates square root of n
 * @n: number to find square root of
 * @check: number to test if it's square root
 * Return: square root of n
 */

int sqr(int n, int check)
{
	int sq = check * check;

	if (sq == n)
		return (check);
	if (sq > n)
		return (-1);
	return (sqr(n, check + 1));
}

/**
 * _sqrt_recursion - returns natural square root of n
 * @n: number to find natural square root of
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqr(n, 0));
}
