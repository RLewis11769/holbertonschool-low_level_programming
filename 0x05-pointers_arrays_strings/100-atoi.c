#include "holberton.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: integer that is converted
 */

int _atoi(char *s)
{
	int x;
	int result = 0;
	int sign = 1;
	int after = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == '-')
			sign = -sign;
		if (s[x] >= '0' && s[x] <= '9')
		{
			result = (result * 10) + (s[x] - '0');
			after = 1;
		}
		else if (after != 0)
			break;
	}

	return (sign * result);
}
