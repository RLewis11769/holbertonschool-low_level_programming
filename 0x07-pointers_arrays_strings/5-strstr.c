#include "holberton.h"

/**
 * *_strstr - locates substring
 * @haystack: pointer to string to be searched
 * @needle: pointer to string to be searched for
 * Return: pointer to beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int n, h;
	int hlen = 0;
	int nlen = 0;

	while (haystack[hlen] != '\0')
		hlen++;

	while (needle[nlen] != '\0')
		nlen++;

	for (n = 0; n <= nlen; n++)
	{
		for (h = 0; h <= hlen; h++)
		{
			if (haystack[h] == needle[n])
			{
				haystack = &haystack[h];
				return (haystack);
			}
			else if (haystack[h] == hlen)
				break;
			else
				continue;
		}
	}
	return (haystack);
}
