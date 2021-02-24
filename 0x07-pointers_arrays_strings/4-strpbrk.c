#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - searches string for any of a set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to string to be matched
 * Return: pointer to matching byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int y;

	for (;; s++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
				return (s);
			if (*s == '\0')
				return (0);
		}
	}
}
