#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array of pointers to argument strings
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int x, y;
	int result;

	/* Require exactly 2 arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		/* Stored as strings so convert to numbers */
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;
	}
	printf("%d\n", result);

	return (0);
}
