#include <stdio.h>

/**
 * main - Prints alphabet backwards
 * Return: 0 if successful
 */

int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
