#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copies string
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicated string or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	unsigned int length = 0;
	unsigned int x;
	char *p;

	while (str[length] != '\0')
		length++;

	p = (char *)malloc(length * sizeof(char) + 1);

	if (str == 0)
		return (NULL);
	if (p == 0)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		p[x] = str[x];
	return (p);
}
