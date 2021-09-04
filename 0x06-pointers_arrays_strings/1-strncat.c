#include "holberton.h"

/**
 * *_strncat - concatenates 2 strings
 * @dest: string to be added onto
 * @src: string to be appended to second string
 * @n: max number of bytes in src to copy
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen, c;

	/* Find length of dest */
	for (dlen = 0; dest[dlen] != '\0';)
		dlen++;
	/* Copy src[c] to dest until n bytes copied */
	for (c = 0; src[c] != '\0' && c < n; c++)
	{
		dest[dlen] = src[c];
		dlen++;
	}
	/* dlen is now one more than length of string so add null terminator */
	dest[dlen] = '\0';

	return (dest);
}
