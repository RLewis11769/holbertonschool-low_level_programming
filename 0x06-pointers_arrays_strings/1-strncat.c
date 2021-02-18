#include "holberton.h"

/**
 * *_strncat - concatenates 2 strings
 * @dest: string to be added onto
 * @src: string to be appended to second string
 * @n: max number of bytes in src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int dlength = 0;

	while (dest[dlength] != '\0')
		dlength++;

	for (x = 0; x < n; x++)
		dest[dlength + x] = src[x];
	dest[dlength + x] = '\0';

	return (dest);
}
