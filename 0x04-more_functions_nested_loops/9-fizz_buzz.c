#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - checks for uppercase letters
 * @c: integer to check
 *
 * Return: 1 is uppercase, 0 otherwise
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

void fizz_buzz(void)
{
	int n;
	char *F = "Fizz";
	char *B = "Buzz";

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s%s ", F, B);
		else if (n % 3 == 0)
			printf("%s ", F);
		else if (n % 5 == 0)
			printf("%s ", B);
		else
			printf("%d ", n);
	}
	putchar('\n');
}
