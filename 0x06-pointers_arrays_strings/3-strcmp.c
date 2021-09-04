#include "holberton.h"

/**
 * *_strcmp - compares 2 strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: ascii value difference of first non-matching character or 0
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	/* At first instance of non-matching character, return difference */
	for (x = 0; s1[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}

	/* Else, if the strings are the same, return 0 */
	return (0);
}
