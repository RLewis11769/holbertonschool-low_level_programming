#include <stdlib.h>
#include "holberton.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer to array that holds base-10 number
 * @index: position to be changed to 1 in 0-based index
 * Return: 1 if successful, -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	if (n == NULL)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
