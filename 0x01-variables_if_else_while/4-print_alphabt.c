#include <stdio.h>

/**
 * main - Print alphabet except 'e' and 'q'
 * Return: 0 if successful
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	putchar('\n');

	return (0);
}
