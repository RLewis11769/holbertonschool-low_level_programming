#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int x;
		int sum = 0;
		va_list args;

		va_start(args, n);

		for (x = 0; x < n; x++)
			sum += va_arg(args, int);

		va_end(args);

		return (sum);
	}
	return (0);
}
