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
	int n;

	for (;; haystack++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if ((*haystack == *needle)
&& *(haystack + 1) == *(needle + 1))
				return (haystack);
		}
		if (*haystack == '\0')
			return (NULL);
	}
}
