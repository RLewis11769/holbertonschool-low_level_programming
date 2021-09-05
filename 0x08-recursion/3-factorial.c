#include "holberton.h"

/**
 * factorial - returns factorial of given number
 * @n: number to find factorial of
 * Return: factorial of positive number or -1 to indicate error if negative
 */

int factorial(int n)
{
	/* If n is negative, returns -1 to indicate error */
	if (n < 0)
		return (-1);

	/* Base condition passes back 1 when reaches 0 */
	if (n == 0)
		return (1);

	/* Multiplies n by itself n-1 times starting at 1*n */
	return (n * (factorial(n - 1)));
}
