#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 * Return: 0 if successful
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
