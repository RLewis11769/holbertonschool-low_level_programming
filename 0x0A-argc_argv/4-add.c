#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checkNum - checks if string contains only numbers
 * @str: pointer to string to check
 * Return: 1 if only digits, 0 if false
 */

int checkNum(char *str)
{
	int dig = 0;

	while (str[dig])
	{
		/* Check if each digit in string is number */
		if ((str[dig] < '0') || (str[dig] > '9'))
			return (0);
		dig++;
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

	/* Edge case where no arguments gives 0 as answer */
	if (argc == 1)
		printf("0\n");
	else
	{
		for (x = 1; x < argc; x++)
		{
			/* Loop through every arg to check if digits */
			if (checkNum(argv[x]))
				sum += atoi(argv[x]);
			/* If any arg is not a digit, print error */
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
