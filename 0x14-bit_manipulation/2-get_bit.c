#include <stdlib.h>
#include "holberton.h"

/**
 * get_bit - returns value of bit at given index
 * @n: number in base-10
 * @index: postion to find value of in 0-based index
 * Return: value of bit at index in binary number (or -1 if error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shift;

	if (index >= 32)
		return (-1);

	shift = n >> index;

	if (shift % 2 == 1)
		return (1);
	else
		return (0);
}
