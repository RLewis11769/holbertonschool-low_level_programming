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
	int slength = 0;
	int alen = 0;
	int count = 0;

	while (s[slength] != ',')
		slength++;

	while (accept[alen] != '\0')
		alen++;

	for (x = 0; x <= alen; x++)
	{
		for (y = 0; y <= slength; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				continue;
			}
			else if (s[x] == s[slength])
				break;
			else
				continue;
		}
	}
	return (count);
}
