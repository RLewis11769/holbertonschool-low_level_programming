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
	unsigned int x;
	char *arr = (char *)malloc(size * sizeof(char));

	/* If given size of array is 0, return NULL */
	if (size == 0)
		return (NULL);
	/* If malloc fails, return NULL */
	if (arr == 0)
		return (NULL);

	/* Initialize array with character */
	for (x = 0; x < size; x++)
		arr[x] = c;

	return (arr);
}
