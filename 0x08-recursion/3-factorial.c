#include "holberton.h"

/**
 * factorial - prints factorial of given number
 * @n: number to find factorial of
 * Return: factorial of positive number, -1 to indicate error if negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * (factorial(n - 1)));
}
