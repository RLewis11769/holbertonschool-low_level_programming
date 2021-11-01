#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of pointers to argument strings
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	/* Not using argc at all so void out unused parameter */
	(void)argc;

	/* argv[0] is the first thing entered aka program name */
	printf("%s\n", argv[0]);

	return (0);
}
