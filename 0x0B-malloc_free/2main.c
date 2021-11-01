#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("Best ", "School");
	if (s == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
