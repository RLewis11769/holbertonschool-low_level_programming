#include <stdlib.h>
#include "holberton.h"


/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer to array that holds base-10 number
 * @index: position to be changed to 0 in 0-based index
 * Return: 1 if successful, -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	if (n == NULL)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
