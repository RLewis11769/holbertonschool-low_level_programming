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

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	return (dest);
}
