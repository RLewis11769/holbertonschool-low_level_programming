#include "holberton.h"

/**
 * check_prime - recursive function to find if number is prime
 * @n: number to test if prime
 * @p: possible number n is divisible by
 * Return: 1 if prime, 0 if not
 */

int check_prime(int n, int p)
{
	/* Base condition when (p + 1) reaches n */
	/* Have not found any ints that divide evenly */
	if (n == p)
		return (1);

	/* If n is divisible by any number between 2 and p - 1, it is not prime */
	if (n % p == 0)
		return (0);

	/* Start testing at 2 and increase until reach n (or evenly divisible) */
	return (check_prime(n, p + 1));
}

/**
 * is_prime_number - returns if prime number or not
 * @n: number to determine if prime
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	/* 1, 0, and negative numbers cannot be prime */
	if (n <= 1)
		return (0);

	/* 2 is first possible prime number */
	return (check_prime(n, 2));
}
