#include "holberton.h"
#include <stdio.h>

/**
 * main - calls prime_factor function
 * Return: 0 if successful
 */

int main(void)
{
	prime_factor(612852475143);
	return (0);
}

/**
 * prime_factor - finds largest prime factor of 612852475143
 */

void prime_factor(unsigned long n)
{
	int x = 2;
	int largest = 2;

	while (n != 1)
	{
		if (n % x == 0)
		{
			n = n / x;
			if ( x > largest)
				largest = x;
		}
	}
	x++;
	printf("%d", largest);
}
