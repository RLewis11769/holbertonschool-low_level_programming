#include "holberton.h"

/**
 * print_last_digit - prints last digit of any number
 * @x: number to find last digit of
 * Return: value of last digit (also printed)
 */

int print_last_digit(int x)
{
	int last = x % 10;

	if (x < 0)
		last = -last;

	_putchar(last + '0');

	return (last);
}
