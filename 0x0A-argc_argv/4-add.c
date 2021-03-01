#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checkNum - checks if string contains only numbers
 * @n: pointer to string to check
 * Return: 1 if only digits, 0 if false
 */

int checkNum(char *n)
{
	while (*n)
	{
		if (!((*n >= '0') && (*n <= '9')))
			return (0);
		n++;
	}
	return (1);
}

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

	if ((argc > 0) && (argc < 2))
		printf("0\n");
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (checkNum(argv[x]))
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
