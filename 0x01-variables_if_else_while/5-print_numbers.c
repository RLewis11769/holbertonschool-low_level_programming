#include <stdio.h>

/**
 * main - Prints 0 to 9
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
