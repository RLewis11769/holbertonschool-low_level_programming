#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 * Return: 0 if successful
 */

int main(void)
{
	int x;
	long int a = 1;
	long int b = 2;
	long int sum;

	for (x = 0; x < 50; x++)
	{
		printf("%ld", a);
		if (x < 49)
			printf(", ");
		else
			putchar('\n');
		sum = a + b;
		a = b;
		b = sum;
	}
	return (0);
}
