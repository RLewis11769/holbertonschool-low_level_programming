#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string inputted
 * @separator: string printed between strings
 * @n: count of strings inputted
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *toPrint;

	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	if (n != 0)
	{
		for (x = 0; x < n; x++)
		{
			toPrint = va_arg(strings, char *);
			if (toPrint == NULL)
				toPrint = "(nil)";
			printf("%s", toPrint);
			if (x < n - 1)
				printf("%s", separator);
		}
		va_end(strings);
	}
	putchar('\n');
}
