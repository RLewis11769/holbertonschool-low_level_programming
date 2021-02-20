#include "holberton.h"

/**
 * *leet - encodes a string into leet
 * @str: character to be encoded
 * Return: encoded character
 */

char *leet(char *str)
{
	int x = 0;
	int n = 0;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'L', 'l'};
	int num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[x] != '0')
	{
		for (n = 0; n <= 9; n++)
		{
			if ((str[x] == letter[n]) && (letter[n] != num[n]))
				str[x] = num[n];
		}
		x++;
	}
	return (str);
}
