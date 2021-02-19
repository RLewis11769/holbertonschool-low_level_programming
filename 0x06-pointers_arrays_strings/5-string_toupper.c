#include "holberton.h"

/**
 * *string_toupper - changes lowercase letters to uppercase
 * @str: pointer to characters to be chaged
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] = str[n] - 32;
		n++;
	}

	return (str);
}
