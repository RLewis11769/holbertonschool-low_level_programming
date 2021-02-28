#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of numbers entered
 * @argc: number of arguments
 * @argv: array of pointers to argument strings
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int x;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (isdigit(*(argv[x])))
				sum += atoi(argv[x]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
