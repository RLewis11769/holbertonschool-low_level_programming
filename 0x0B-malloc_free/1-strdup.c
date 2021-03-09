#include <stdlib.h>

/**
 * _strdup - copies string
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicated string or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	int x;
	int length = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	p = malloc(length * sizeof(char) + 1);
	if (p == 0)
		return (NULL);

	for (x = 0; x < length; x++)
		p[x] = str[x];
	p[x] = '\0';

	return (p);
}
