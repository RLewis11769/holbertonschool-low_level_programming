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
	int dlength = 0;
	int lengths = 1;
	char *ptr;

	while (src[lengths] != '\0')
		lengths++;

	while (dest[dlength] != '\0')
		dlength++;

	for (x = 0; x < lengths; x++)
		dest[dlength + x] = src[x];
	ptr = dest;

	return (ptr);
}
