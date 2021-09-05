#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - locates substring
 * @haystack: pointer to string to be searched
 * @needle: pointer to string to be searched for
 * Return: pointer to beginning of located substring or NULL
 */

/* Examples:
	"hello" and "lo" == "lo"
	"hello" and "h" == "hello"
	"hello" and "world" == seg fault (including regular strstr)
*/

char *_strstr(char *haystack, char *needle)
{
	int h = 0;
	int n = 0;

	if (needle[0] == '\0')
		return (haystack);

	for (h = 0; haystack[h] != '\0'; h++)
	{
		/* If first character of needle found, start comparing */
		if (haystack[h] == needle[0])
		{
			for (n = 0; needle[n] != '\0'; n++)
			{
				/* Start comparing all characters in needle to haystack */
				/* Starting at position where needle[0] was found */
				if (haystack[h + n] != needle[n])
					break;
				/* If all characters in needle are found, return pointer */
				else if (needle[n + 1] == '\0')
					return (haystack + h);
			}
		}
	}
	/* If exact match not found, return NULL */
	return (NULL);
}
