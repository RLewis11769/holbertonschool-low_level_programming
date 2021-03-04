#include "holberton.h"
#include <stdlib.h>

/**
 * length - finds length of string
 * @s: string to find length of
 * Return: length of string
 */

int length(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to space in memory holding s1 then s2, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int x, y;
	int c = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = (char *)malloc(length(s1) + length(s2) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
	{
		p[c] = s1[x];
		c++;
	}

	for (y = 0; s2[y] != '\0'; y++)
	{
		p[c] = s2[y];
		c++;
	}
	p[c] = '\0';

	return (p);
}
