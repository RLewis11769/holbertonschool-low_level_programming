#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - prints binary conversion of decimal input
 * @n: number in base-10 to be converted
 */

/*
 * cannot use array
 * cannot use / or %
 */

void print_binary(unsigned long int n)
{
	/* shifting by 1 is equivalent to dividing by 2 */
	if (n > 1)
		/* recursion essentially saves the number in reverse */
		print_binary(n >> 1);

	/* basically 0 for even, 1 for odd */
	_putchar((n & 1) + '0');
}
