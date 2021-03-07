#include <stdio.h>

/**
 * main - Prints alphabet in lowercase then uppercase
 * Return: 0 if successful
 */

int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
