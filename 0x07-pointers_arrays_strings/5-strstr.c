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
	int h = 0;
	int n = 0;

	if (*haystack == '\0')
		return (NULL);

	while (haystack[h] != '\0')
	{
		if (*(haystack + h) == *(needle + n))
		{
			n++;
			h++;
			if (*(needle + n) == '\0')
				return (haystack + h - n);
		}
		else
		{
			n = 0;
			h++;
		}
	}
	if (*needle == '\0')
		return (haystack);

	return (NULL);
}
