#include <stdlib.h>

/**
 * _strdup - copies string
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicated string or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	int x;
	int length = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	/* Finds length of string */
	while (str[length] != '\0')
		length++;

	/* Allocates memory for string and null byte */
	arr = malloc(length * sizeof(char) + 1);
	if (arr == 0)
		return (NULL);

	/* Copies string */
	for (x = 0; x < length; x++)
		arr[x] = str[x];
	/* Adds null byte (x is one more than length of string) */
	arr[x] = '\0';

	return (arr);
}
