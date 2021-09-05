#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - searches string for any of a set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to string to be matched
 * Return: pointer to matching byte or NULL
 */

/*
 * Examples:
 *	"hello" and "hole" == "hello" (returns pointer to "h")
 *	"hello" and "world" == "llo" ('l' in 'world' comes earliest in 'hello')
 *	"hello" and "word" == "o" ('o' in 'world' comes earliest in 'hello')
*/

char *_strpbrk(char *s, char *accept)
{
	int c, a;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			/* Returns pointer at first match of character in accept[a] */
			if (s[c] == accept[a])
				return (s + c);
		}
	}

	return (0);
}
