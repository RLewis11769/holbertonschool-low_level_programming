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

	p = (char *)malloc(length * sizeof(char));

	if (str == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		p[x] = str[x];
	return (p);
}
