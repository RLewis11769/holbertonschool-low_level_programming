#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates character in string
 * @s: pointer to string where c is
 * @c: character to be located
 * Return: pointer to first occurence of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* If c is found, return pointer to it */
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
