#include "holberton.h"

/**
 * *_strchr - locates character in string
 * @s: pointer to string where c is
 * @c: character to be located
 * Return: pointer to first occurence of c or NULL
 */

char *_strchr(char *s, char c)
{
	int x;
	int length = 0;

	while (s[length] != '\0')
		length++;

	for (x = 0; x <= length; x++)
	{
		if (s[x] == c)
		{
			s = &s[x];
			return (s);
		}
		else if (s[x] == length)
		{
			break;
		}
		else
			continue;
	}
	return (0);
}
