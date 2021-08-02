#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98 from whatever random int
 * @n: integer to count from
 */

void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x > 98; x--)
			printf("%d, ", x);
	}

	if (n < 98)
	{
		for (x = n; x < 98; x++)
			printf("%d, ", x);
	}

	printf("98\n");
}
