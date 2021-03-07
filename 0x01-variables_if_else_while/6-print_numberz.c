#include <stdio.h>

/**
 * main - Prints 0 to 9 using putchar
 * Return: 0 if successful
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');

	return (0);
}
