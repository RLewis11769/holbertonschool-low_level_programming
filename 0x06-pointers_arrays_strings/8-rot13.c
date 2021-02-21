#include "holberton.h"

/**
 * *rot13 - encodes string into rot13
 * @str: pointer to string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i = 0;
	int x = 0;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		x = 0;
		while (rot1[x] != '\0')
		{
			if (str[i] == rot1[x]){
				str[i] = rot2[x];
				break;}
			x++;
		}
		i++;
	}
	return (str);
}
