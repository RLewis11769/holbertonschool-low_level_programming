#include <stdio.h>

/**
 * main - Prints multiples of 3 or 5 under 1024
 * Return: 0 if successful
 */

int main(void)
{

	int x = 1;
	int y;
	int sum = 0;

	for (; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			for (y = 0; ; y++)
			{
				sum = sum + x;
				break;
			}
		}
	}
	printf("\n", sum);
	return (0);
}
