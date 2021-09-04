#include "holberton.h"

/**
 * *leet - encodes a string into leet
 * @str: string with characters to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	int c = 0;
	int n = 0;
	/* Each char in letter[] is encoded to each int in num[] at index */
	char letter[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[c] != '\0')
	{
		/* Go through all 10 chars in letter[] */
		for (n = 0; n < 10; n++)
		{
			/* If char is in letter, replace with matching index in num[] */
			if ((str[c] == letter[n]) && (letter[n] != num[n]))
				str[c] = num[n];
		}
		c++;
	}

	return (str);
}
