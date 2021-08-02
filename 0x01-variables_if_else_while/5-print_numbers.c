#include <stdio.h>

/**
 * main - Prints 0 to 9
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
