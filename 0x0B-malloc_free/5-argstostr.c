#include "holberton.h"
#include <stdlib.h>

/**
 * length - finds length of string
 * @s: string to find length of
 * Return: length
 */

int length(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * argstostr - concatenates arguments of program
 * @ac: argc count
 * @av: pointer to argv array
 * Return: pointer to new string, or NULL
 */

char *argstostr(int ac, char **av)
{
	int x, y;
	int s = 0;
	int l = 0;
	char *p;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
		l += length(av[x]);

	p = (char *)malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			p[s] = av[x][y];
			s++;
		}
		p[s++] = '\n';
	}
	p[s] = '\0';

	return (p);
}
