#include <stdlib.h>

/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements in array
 * @size: size of each element in array
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	int *p;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	p = malloc(sizeof(size) * nmemb);
	if (p == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		p[x] = 0;

	return (p);
}
