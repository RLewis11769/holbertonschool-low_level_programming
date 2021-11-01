#include <stdio.h>

/**
 * main - prints number of arguments passed in
 * @argc: number of arguments
 * @argv: array of pointers to argument strings
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	/* Not using argv at all so void out unused parameter */
	(void)argv;

	/* argc counts total number of arguments - exclude program name at argv[0] */
	printf("%d\n", argc - 1);

	return (0);
}
