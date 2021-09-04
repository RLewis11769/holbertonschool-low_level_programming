#include "holberton.h"

/**
 * *string_toupper - changes lowercase letters to uppercase
 * @str: pointer to string with letters to change
 * Return: pointer to changed string
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		/* Uppercase ascii characters are 32 less than lowercase */
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] = str[n] - 32;
		n++;
	}

	return (str);
}
