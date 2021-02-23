#include "holberton.h"

/**
 * *_strpbrk - searches string for any of a set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to string to be matched
 * Return: pointer to matching byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	int length = 0;
	int alen = 0;

	while (s[length] != '\0')
		length++;

	while (accept[alen] != '\0')
		alen++;

	for (x = 0; x <= length; x++)
	{
		for (y = 0; y <= alen; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}
			else if (s[x] == length)
				break;
			else
				continue;
		}
	}
	return (s);
}
