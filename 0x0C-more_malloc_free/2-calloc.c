#include <stdlib.h>

/**
 * _memset - fills memory with constant byte
 * @s: pointer to string to fill
 * @b: constant byte to fill
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}

/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements in array
 * @size: size of each element in array
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);

	_memset(p, 0, nmemb);

	return (p);
}
