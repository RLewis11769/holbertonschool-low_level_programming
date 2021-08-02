#include "holberton.h"
#include <stdio.h>

/**
 * main - calls prime_factor for 612852475143
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long int num = 612852475143;

	prime_factor(num);

	return (0);
}

/**
 * prime_factor - prints the prime factors of a number
 * @num: the number to factor
 */

void prime_factor(unsigned long int num)
{
	unsigned long int x;

	for (x = 1; x < num; x++)
	{
		/* If num is divisible by x, then x is a prime factor */
		if ((num % x) == 0)
			/* Redefines num each time until find largest */
			num = num / x;
	}
	printf("%lu\n", num);
}
