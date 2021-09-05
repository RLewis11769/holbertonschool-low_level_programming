#include "main.h"

/**
 * _strspn - finds length of prefix substring
 * @s: pointer to string to compare
 * @accept: pointer to acceptable characters
 * Return: number of bytes in common until first mismatch
 */

/*
 * Examples:
 *	"hello" and "hole" == 5 (all characters)
 *	"hello o" and "hole" == 5 (' ' does not match)
 *	"hello" and "ole" == 0 (does not match 'h')
 *	"hello" and "hold" == 1 (matches 'h' but not 'e')
*/

unsigned int _strspn(char *s, char *accept)
{
	int a, c;
	int count = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			/* Increment count if character matches */
			if (s[c] == accept[a])
			{
				count++;
				break;
			}
		}
		/* If no match, return */
		if (accept[a] == '\0')
			return (count);
	}
	return (count);
}
