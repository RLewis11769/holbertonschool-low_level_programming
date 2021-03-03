#include "holberton.h"
#include <stdlib.h>

/**
 * length - finds length of string
 * @s: string to find length of
 * Return: length of string
 */

int length(char *s)
{
	int length;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strdup - copies string
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicated string or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	int x;
	char *p;

	if (str == NULL)
		return (NULL);

	p = (char *)malloc(length(str) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < length(str); x++)
		p[x] = str[x];
	p[x] = '\0';

	return (p);
}
