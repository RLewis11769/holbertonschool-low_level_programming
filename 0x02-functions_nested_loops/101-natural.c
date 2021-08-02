#include <stdio.h>

/**
 * natural - Sums all multiples of 3 or 5 under 1024
 * @x: Number to sum multiples of
 */

void natural(int x)
{
	int i;
	int sum = 0;

	for (i = 0; i < x; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}

/**
 * main - Calls natural()
 * Return: 0 if successful
 */

int main(void)
{
	natural(1024);

	return (0);
}
