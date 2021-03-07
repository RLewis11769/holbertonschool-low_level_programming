#include "holberton.h"

/**
 * print_last_digit - prints last digit of any number
 * Return: value of last digit
 * @x: First operand
 */

int print_last_digit(int x)
{
	int last = x % 10;

	if (x < 0)
		last = -last;

	_putchar(last + '0');

	return (last);
}
