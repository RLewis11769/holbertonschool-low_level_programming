#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: copied string
 * @src: string to be copied
 * @n: number of bytes in src to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	/* Copy src to dest */
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	/* If src is shorter than n, fill the rest of dest with '\0' */
	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
