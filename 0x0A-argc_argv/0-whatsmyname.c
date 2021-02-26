#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of pointers to argument strings
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
