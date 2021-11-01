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
	int index = 0;
	int len = 0;
	char *arr = NULL;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	/* Find length of each string with space for newline */
	for (x = 0; x < ac; x++)
		len = len + length(av[x]) + 1;

	/* Malloc for each string and null byte */
	arr = malloc(sizeof(char) * len + 1);
	if (arr == NULL)
		return (NULL);

	/* Copy each string into new array */
	for (x = 0; x < ac; x++)
	{
		/* For each string, start at 0 index */
		y = 0;
		while (av[x][y] != '\0')
		{
			/* Copy each character in string into new array */
			arr[index] = av[x][y];
			/* Increment in string copying from */
			y++;
			/* Increment array string pointer */
			index++;
		}
		/* Add newline between each string */
		arr[index] = '\n';
		/* Increment array for newline character */
		index++;
	}
	/* Add null byte to end of string */
	arr[index] = '\0';

	return (arr);
}
