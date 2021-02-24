#include "holberton.h"

/**
 * _strlen_recursion - returns length of string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	static int count;

	if (*s)
	{
		_strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
