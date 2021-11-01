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
	char *arr;

	/* If either string is null, treated as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Malloc for length of s2, s2, and null byte */
	arr = (char *)malloc((length(s1) + length(s2)) * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	/* Copy each digit x of s1 to arr */
	for (x = 0; s1[x] != '\0'; x++)
	{
		arr[c] = s1[x];
		c++;
	}

	/* Copy each digit y of s2 to arr */
	for (y = 0; s2[y] != '\0'; y++)
	{
		arr[c] = s2[y];
		c++;
	}

	/* c has kept track of length of s1 and s2, so set to null byte */
	arr[c] = '\0';

	return (arr);
}
