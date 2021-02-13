#include <stdio.h>
#include "holberton.h"

/**
 * main - calls fizz_buzz function
 * Return: 0 if successful
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints 1-100 but with Fizz/Buzz/FizzBuzz in place of multiples
 */

void fizz_buzz(void)
{
	int n;
	char *F = "Fizz";
	char *B = "Buzz";

	for (n = 1; n < 100; n++)
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
	printf("%s\n", B);
}
