#include <stdlib.h>
#include "holberton.h"

/**
 * flip_bits - finds number of bits required to change one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits required to change
 */

/*
 * cannot use / or %
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sum = 0;
	int x;

	if ((m > 4294967295) && (m & 1))
		return (63);
	if ((n > 4294967295) && (n & 1))
		return (63);

	/* traverses all 32 digits for differences */
	for (x = 0; x <= 32; x++)
	{
		if (((m >> x) & 1) != ((n >> x) & 1))
			sum++;
	}
	return (sum);
}
