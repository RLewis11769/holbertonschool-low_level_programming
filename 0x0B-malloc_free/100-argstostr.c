#include "main.h"
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
	int len = 0;
	char *arr = NULL;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	/* Find length of each string */
	for (x = 0; x < ac; x++)
		len += length(av[x]);

	/* Malloc space for each string and null byte */
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (arr == NULL)
		return (NULL);

	/* Copy each string into new string */
	for (x = 0; x < ac; x++)
	{
		/* Copy each character into new string */
		for (y = 0; av[x][y] != '\0'; y++)
		{
			arr[s] = av[x][y];
			s++;
		}
		/* If not last string, add newline and advance */
		if (x < ac - 1)
		{
			arr[s] = '\n';
			s++;
		}
		/* If last string, add newline and null byte */
		else
		{
			arr[s] = '\n';
			arr[s + 1] = '\0';
		}
	}

	return (arr);
}
