#include "holberton.h"

/**
 * *_strcat - concatenates 2 strings
 * @dest: string to be added onto
 * @src: string to be appended to second string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int len = 0;

	while (dest[len] != '\0')
		len++;

	for (x = 0; src[x] != '\0'; x++)
		dest[len + x] = src[x];

	return (dest);
}
