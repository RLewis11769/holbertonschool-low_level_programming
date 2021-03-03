#include "holberton.h"
#include <stdlib.h>

/**
 * length - finds length of string
 * @s: string to find length of
 * Return: length
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
 * argstostr - concatenates arguments of program
 * @ac: argc count
 * @av: pointer to argv array
 * Return: pointer to new string, or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, x;
	char *p;

	for (i = 0; i < ac; i++)
		av[i] = av[ac - 1];

	p = (char *)malloc(sizeof(char) * length(av[i]) + ac);

	if (p == 0)
		return (NULL);

	for (x = 0; p[x] != '\0'; x++)
		p[x] = *av[x];

	return (p);
}
