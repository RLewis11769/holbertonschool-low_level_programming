#include "holberton.h"

/**
 * *rot13 - encodes string into rot13
 * @str: pointer to string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int r;
	int c = 0;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[c] != '\0')
	{
		r = 0;
		while (rot1[r] != '\0')
		{
			/* If str[s] is in rot1, replace with matching index in rot2 */
			if (str[c] == rot1[r])
			{
				str[c] = rot2[r];
				break;
			}
			r++;
		}
		c++;
	}
	return (str);
}
