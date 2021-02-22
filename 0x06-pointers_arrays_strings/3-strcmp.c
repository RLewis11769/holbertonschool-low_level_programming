#include "holberton.h"

/**
 * *_strcmp - compares 2 strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: number of bytes different
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int comp = 0;
	int length = 0;

	while (s1[length] != '\0')
		length++;

	for (x = 0; x <= length; x++)
	{
		if (*(s1 + x) == *(s2 + x))
			comp = (*(s1 + x) - *(s2 + x));
		else
		{
			comp = (*(s1 + x) - *(s2 + x));
			break;
		}
	}
	return (comp);
}
