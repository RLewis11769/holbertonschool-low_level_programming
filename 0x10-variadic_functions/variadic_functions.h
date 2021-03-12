#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>

/**
 * struct printAll - struct for printing
 * @specifier: format specifier character
 * @printFunc: function pointer for print functions
 */

typedef struct printAll
{
	char *specifier;
	void (*printFunc)(va_list);
} func_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
void printChar(va_list c);
void printString(va_list s);
void printInt(va_list i);
void printFloat(va_list f);

#endif
