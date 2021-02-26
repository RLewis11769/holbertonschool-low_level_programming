#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: array of pointers to argument strings
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
