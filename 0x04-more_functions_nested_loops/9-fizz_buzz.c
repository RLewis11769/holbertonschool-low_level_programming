#include <stdio.h>
#include "holberton.h"

/**
 * fizz_buzz - prints 1-100 but with Fizz/Buzz/FizzBuzz in place of multiples
 */

void fizz_buzz(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);
		if (x < 100)
			putchar(' ');
	}
	putchar('\n');
}

/**
 * main - calls fizz_buzz function
 * Return: 0 if successful
 */

int main(void)
{
	fizz_buzz();

	return (0);
}
