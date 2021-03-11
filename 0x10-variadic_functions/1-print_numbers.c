#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers inputted
 * @separator: string printed between numbers
 * @n: count of numbers inputted
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list(args);

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	if (n != 0)
	{
		for (x = 0; x < n; x++)
		{
			printf("%d", va_arg(args, int));
			if (x < n - 1)
				printf("%s", separator);
		}
	}
	va_end(args);

	putchar('\n');
}
