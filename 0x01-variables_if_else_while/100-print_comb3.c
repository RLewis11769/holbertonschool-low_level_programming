#include <stdio.h>

/**
 * main - Prints lowest possible combination between 0-99
 * Return: 0 if successful
 */

int main(void)
{
	int d, f, s;

	for (d = 00; d < 100; d++)
	{
		f = (d / 10);
		s = (d % 10);
		if (f < s)
		{
			putchar(f + '0');
			putchar(s + '0');
			if (d < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
