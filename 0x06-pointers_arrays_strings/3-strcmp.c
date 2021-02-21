#include "holberton.h"

/**
 * *_strcmp - compares 2 strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: number of bytes different
 */

int _strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}
