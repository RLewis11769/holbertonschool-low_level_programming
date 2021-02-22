#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @src: pointer to bytes copied from
 * @dest: pointer to bytes copied to
 * @n: number of bytes to be copied
 * Return: pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[n + x] = src[x];

	return (dest);
}
