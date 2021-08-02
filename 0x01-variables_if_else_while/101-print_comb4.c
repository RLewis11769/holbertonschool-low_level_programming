#include <stdio.h>

/**
 * main - Prints lowest unique combination of digits between 0-999
 * Return: 0 if successful
 */

int main(void)
{
	int d, f, s, t;

	for (d = 0; d < 1000; d++)
	{
		/* First, second, and third digit */
		f = (d / 100);
		s = (d / 10 % 10);
		t = (d % 10);
		if ((f < s) && (s < t))
		{
			putchar(f + '0');
			putchar(s + '0');
			putchar(t + '0');
			if (d < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
