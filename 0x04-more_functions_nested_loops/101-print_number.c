#include "holberton.h"

/**
 * printIntHelper - Helper function that actually prints integers
 * @num: Integer to print
 */

void printIntHelper(unsigned int num)
{
	int output;

	/* Base condition to end recursion and start printing */
	if (num == 0)
		return;

	else
	{
		/* Strips last digit of integer */
		output = num % 10;
		/* Sends back integer without last digit for recursion */
		printIntHelper(num / 10);
		/* Prints digits in order */
		_putchar(output + '0');
	}
}

/**
 * print_number - recursively prints integers
 * @n: integer to be printed
 */

void print_number(int n)
{
	/* Edge case for 0 */
	if (n == 0)
		_putchar(0 + '0');

	/* Prints - for negative numbers */
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	/* Casts as unsigned to account for positive INT_MIN */
	printIntHelper((unsigned int)n);
}
