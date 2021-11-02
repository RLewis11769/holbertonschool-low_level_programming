#include <stdlib.h>

/**
 * _memset - fills memory with constant byte
 * @s: pointer to string to fill
 * @b: constant byte to fill
 * @n: number of bytes to fill
 * Return: pointer to memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}

/**
 * _calloc - allocates memory for array and initializes to 0
 * @nmemb: number of elements in array
 * @size: size of each element in array
 * Return: pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	/* Allocate "size" number of bytes each of "nmemb" size */
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	/* Fill each element of arr, number of bytes nmemb * size, with 0 */
	_memset(arr, 0, nmemb * size);

	return (arr);
}
