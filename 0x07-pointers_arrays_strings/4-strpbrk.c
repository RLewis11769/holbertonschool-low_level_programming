#include "holberton.h"

/**
 * *_strpbrk - searches string for any of a set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to string to be matched
 * Return: pointer to matching byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int y;
	int alen = 0;

	while (accept[alen] != '\0')
		alen++;

	for (;; s++)
	{
		for (y = 0; y <= alen; y++)
		{
			if (*s == accept[y])
				return (s);
			if (*s == '\0')
				return (0);
		}
	}
}
