#include "holberton.h"

/**
 * print_sign - checks if number is positive, negative, or 0
 * @n: number to check
 * Return: 1 if positive, -1 if negative, and 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');

	return (0);
}
