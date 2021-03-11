#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - locates substring
 * @haystack: pointer to string to be searched
 * @needle: pointer to string to be searched for
 * Return: pointer to beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int h;

	for (h = 0; haystack[h] != '\0'; h++)
	{
		if (*(haystack + h) == *(needle))
		{
			if (*needle != '\0')
				return (haystack + h);
		}

	}
	if (*haystack == '\0')
		return (NULL);
	if (needle != '\0')
		return (haystack);
	return (0);
}
