#include "holberton.h"
#include <stdlib.h>

/**
 * length - finds length of string
 * @s: string to find length of
 * Return: length of string
 */

int length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	return (i);
}

/**
 * _strdup - copies string
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicated string or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	unsigned int x;
	char *p;

	p = (char *)malloc(length(str) * sizeof(char) + 1);

	if (str == 0)
		return (NULL);
	if (p == 0)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
		p[x] = str[x];
	p[x] = '\0';

	return (p);
}
