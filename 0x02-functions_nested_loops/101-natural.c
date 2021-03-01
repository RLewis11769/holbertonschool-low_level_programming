#include <stdio.h>

/**
 * main - Prints sum of multiples of 3 or 5 under 1024
 * Return: 0 if successful
 */

int main(void)
{
	int x = 1;
	int sum = 0;

	for (; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}
