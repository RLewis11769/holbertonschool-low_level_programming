#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98
 * @x: integer
 */
void print_to_98(int x)
{
	for (; x < 98; x++)
	{
		printf("%d, ", x);
	}
	for (; x > 98; x--)
	{
		printf("%d, ", x);
	}
	if (x == 98)
	{
		printf("%d\n", x);
	}
}
