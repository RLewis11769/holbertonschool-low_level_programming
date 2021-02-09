#include "holberton.h"

/**
 * print_last_digit - prints last digit of any number
 * Return: value of last digit
 * @r: First operand
 */

int print_last_digit(int r)
{
	int x = (r % 10);

	if (r >= 0)
	{
		return (x);
	}
	else
		return (x * -1);
	return (0);
}
