#include <stdio.h>

/**
 * main - Prints numbers from 00 to 99
 * Return: 0 if successful
 */

int main(void)
{
	int d;

	for (d = 00; d < 100; d++)
	{
		putchar(d / 10 + '0');
		putchar(d % 10 + '0');
		if (d < 99)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
