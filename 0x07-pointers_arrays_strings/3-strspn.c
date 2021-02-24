#include "holberton.h"

/**
 * _strspn - finds length of prefix substring
 * @s: pointer to string where first half is examined
 * @accept: pointer to string where compared
 * Return: number of bytes in common
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	int count = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[y] == accept[x])
			{
				count++;
				break;
			}
		}
		if (accept[x] == '\0')
			break;
	}
	return (count);
}
