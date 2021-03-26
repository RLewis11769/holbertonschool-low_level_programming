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

	/* traverses all 64 bits for differences */
	for (x = 0; x <= 32; x++)
	{
		if (((m >> x) & 1) != ((n >> x) & 1))
			sum++;
	}
	if (sum > 32)
		return (64);
	return (sum);
}
