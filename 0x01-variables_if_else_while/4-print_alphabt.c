#include <stdio.h>

/**
 * main - Print alphabet except 'e' and 'q'
 * Return: String of alphabet
 */

int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
if (letter != 'e')
if (letter != 'q')
putchar(letter);
putchar('\n');
return (0);
}
