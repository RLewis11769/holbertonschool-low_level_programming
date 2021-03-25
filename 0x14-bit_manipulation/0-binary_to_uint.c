#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts binary number string to unsigned int
 * @b: pointer to array that holds binary string
 * Return: converted number as unsigned int, or 0 if unsuccessful
 */

unsigned int binary_to_uint(const char *b)
{
	int stringlength;
	int result = 0;
	int position;
	int exponent = 0;
	int bit = 0;

	if (b == NULL)
		return (0);

	/* checks if valid binary number and finds string length */
	for (stringlength = 0; b[stringlength] != '\0'; stringlength++)
	{
		if (b[stringlength] != '0' && b[stringlength] != '1')
			return (0);
	}
	position = stringlength - 1;

	/* starts at last digit and continues to first */
	while (position >= 0)
	{
		if (b[position] == '0')
			bit = 0;
		else
			bit = 1;
		/* 1 to the power of exponent is added to result, or 0 */
		result += bit << exponent;
		position--;
		exponent++;
	}
	return (result);
}
