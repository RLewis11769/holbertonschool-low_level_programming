#include "holberton.h"

/**
 * prime - recursive to find prime
 * @p: test operator
 * @n: number to test
 * Return: 1 if prime, 0 if not
 */

int prime(int n, int p)
{
	if (n > 0)
	{
		if (p == 1)
			return (1);
		else
		{
			if (n % p == 0)
				return (0);
			else
				return (prime(n, p - 1));
		}
	}
	return (0);
}

/**
 * is_prime_number - tells if prime number or not
 * @n: number to determine if prime
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int p;

	if ((n == 0) || (n == 1))
		return (0);
	else
	{
		p = prime(n, n / 2);
		if (p == 1)
			return (1);
		else
			return (0);
	}
}
