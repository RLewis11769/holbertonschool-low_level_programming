#include <stdlib.h>
#include "holberton.h"

/**
 * get_endianness - checks endianness of various architecture
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	short int word = 0x0001;
	char *b = (char *)&word;

	if (b[0] == 1)
		return (1);
	else
		return (0);
}
