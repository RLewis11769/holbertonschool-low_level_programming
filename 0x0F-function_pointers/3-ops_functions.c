#include "3-calc.h"

/**
 * op_add - adds 2 integers
 * @a: first integer to add
 * @b: second integer to add
 * Return: sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts second integer from first
 * @a: integer to be subtracted from
 * @b: integer to subtract
 * Return: difference of integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: first integer to multiply
 * @b: second integer to multiply
 * Return: product of integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides first integer by second
 * @a: integer to be divided
 * @b: integer to divide by
 * Return: number of times b goes into a
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds remainder of division of 2 integers
 * @a: integer to be divided
 * @b: integer to divide by
 * Return: remainder after division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
