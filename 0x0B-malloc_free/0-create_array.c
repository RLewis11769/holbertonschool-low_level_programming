#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates and initializes array
 * @size: size of array
 * @c: character to initialize array
 * Return: pointer to array or NULL if unsuccessful
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size * sizeof(size));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
