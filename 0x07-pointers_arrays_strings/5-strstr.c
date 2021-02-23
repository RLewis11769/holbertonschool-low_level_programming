#include "holberton.h"

/**
 * *_strstr - locates substring
 * @haystack: pointer to string to be searched
 * @needle: pointer to string to be searched for
 * Return: pointer to beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int n;
	int nlen = 0;

	while (needle[nlen] != '\0')
		nlen++;

	for (;; haystack++)
	{
		for (n = 0; n <= nlen; n++)
		{
			if (*haystack == needle[n])
				return (needle);
			if (*haystack == '\0')
				return (0);
		}
	}
	return (needle);
}
