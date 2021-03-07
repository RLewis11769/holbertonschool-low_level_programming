#include <stdio.h>

/**
 * main - Prints base16 numbers, 0-9 then a-f
 * Return: 0 if successful
 */

int main(void)
{
	int num;
	char alph;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
