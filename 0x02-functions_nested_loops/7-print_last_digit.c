#include "holberton.h"

/**
 * print_last_digit - prints last digit of any number
 * Return: value of last digit
 * @r: First operand
 */

int print_last_digit(int r)
{
	if (r > 0)
	{
		return (r % 10);
	}
	else if (r < 0)
	{
		return (-r % 10);
	}
	else
		return (0);
}
