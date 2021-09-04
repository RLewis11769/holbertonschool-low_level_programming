#include "holberton.h"

/**
 * *_strcpy - copies string so can be used in other functions
 * @dest: destination buffer to copy to
 * @src: string to copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	/* Set every character in dest equal to src */
	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];
	/* c is now one more than the length of src but does not include null */
	dest[c] = '\0';

	return (dest);
}
