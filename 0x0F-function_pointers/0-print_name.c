#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name by calling regular or uppercase functions
 * @name: pointer to name to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
