#include "holberton.h"

/**
 *sqr - calculates square root of n
 * @n: number to find square root of
 * @min: minimum number square root can be (starts at 1)
 * @max: maximum number square root can be (starts at n)
 * Return: square root of n
 */

int sqr(int n, int min, int max)
{
	int guess, guess2;

	if (min > max)
		return (-1);

	guess = ((min + max) / 2);
	guess2 = guess * guess;

	if (guess2 == n)
		return (guess);
	else if (guess2 < n)
		return (sqr(n, guess + 1, max));
	else
		return (sqr(n, min, guess - 1));
}

/**
 * _sqrt_recursion - returns natural square root of n
 * @n: number to find natural square root of
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
/*	if (n == 0)
		return (0);
		else*/
		return (sqr(n, 1, n));
}
