#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: string where numbers are converted to integers (non-numbers ignored)
 * Return: integer that is converted or 0 if no conversion is possible
 */

int _atoi(char *s)
{
	int c = 0;
	int result = 0;
	int num = 1;

	/* First converts to positive or negative based on - */
	while ((s[c] < '0' || s[c] > '9') && (s[c] != '\0'))
	{
		if (s[c] == '-')
			num *= -1;
		c++;
	}
	/* If s[c] is a number based on ascii */
	while ((s[c] >= '0') && (s[c] <= '9'))
	{
		/* Includes any previous digits in 10s place (starts as 0) */
		result = (result * 10);
		/* Converts to number including pos/neg and adds to result (if any) */
		result += (num * (s[c] - '0'));
		c++;
	}

	return (result);
}
