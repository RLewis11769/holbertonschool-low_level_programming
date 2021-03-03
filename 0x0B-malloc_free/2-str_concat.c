#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to space in memory holding s1 then s2, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int length1 = 0, length2 = 0;
	unsigned int x, y;
	char *p;

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	p = (char *)malloc((length1 + length2) * sizeof(char) + 2);

	if (p == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		p[x] = s1[x];
	for (y = 0; s2[y] != '\0'; y++)
		p[y + length1] = s2[y];

	return (p);
}
