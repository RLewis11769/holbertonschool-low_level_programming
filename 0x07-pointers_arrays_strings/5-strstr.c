#include "holberton.h"

/**
 * *_strstr - locates substring
 * @haystack: pointer to string to be searched
 * @needle: pointer to string to be searched for
 * Return: pointer to beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	for (;; haystack++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (*haystack == needle[x])
				return (haystack);
		}
	}
	if (*haystack == '\0')
		return ('\0');
}
