#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printChar - prints characters
 * @c: format specifier
 */

void printChar(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * printString - prints strings
 * @s: format specifier
 */

void printString(va_list s)
{
	char *str;

	str = va_arg(s, char*);
	if (str == NULL)
		printf("%p", str);
	else
		printf("%s", str);
}

/**
 * printInt - prints integers
 * @i: format specifier
 */

void printInt(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * printFloat - print floating point numbers
 * @f: format specifier
 */

void printFloat(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: string of format specifiers
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int nextLet = 0;
	int indx;

	va_list args;

	struct printAll ChooseF[] = {
		{"c", printChar},
		{"s", printString},
		{"i", printInt},
		{"f", printFloat},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && *(format + nextLet) != '\0')
	{
		indx = 0;
		while (ChooseF[indx].specifier != NULL)
		{
			if (*(format + nextLet) == ChooseF[indx].specifier[0])
			{
				printf("%s", separator);
				ChooseF[indx].printFunc(args);
				separator = ", ";
			}
			indx++;
		}
		nextLet++;
	}
	putchar('\n');
	va_end(args);
}
