#include "holberton.h"
#include <stdio.h>
/**
 * *_memset - fills memory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
