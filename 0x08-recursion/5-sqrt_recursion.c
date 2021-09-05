#include "holberton.h"

/**
 * check_sqr - calculates square root of n
 * @n: number to find square root of
 * @check: possible square root
 * Return: square root of n or -1 on error
 */

int check_sqr(int n, int check)
{
	/* Check is number to check if it's square root */
	int sq = check * check;

	/* Base condition when check^2 reaches n */
	/* Have found square root */
	if (sq == n)
		return (check);

	/* If no ints from 0 to n are square root, square root of n is not integer */
	if (sq > n)
		return (-1);

	/* Start testing at 0 and increase until check^2 reaches n (or too big) */
	return (sqr(n, check + 1));
}

/**
 * _sqrt_recursion - finds natural square root of n
 * @n: number to find natural square root of
 * Return: natural square root of n or -1 on error
 */

int _sqrt_recursion(int n)
{
	/* If n is negative, returns -1 to indicate error */
	if (n < 0)
		return (-1);

	/* 0 is first possible number that can have square root */
	return (sqr(n, 0));
}
