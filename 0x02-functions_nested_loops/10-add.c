#include "holberton.h"
/**
 * add - adds 2 integers
 * @x: first integer
 * @y: second integer
 * Return: 0 if successful
 */
int add(int x, int y)
{
	int sum;

	sum = x + y;

	_putchar((sum / 10) + '0');
	_putchar((sum % 10) + '0');
	return (0);
}
