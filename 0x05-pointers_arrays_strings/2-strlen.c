#include "holberton.h"

/**
 * _strlen - returns length of string
 * @s: string length to be evaluated
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
