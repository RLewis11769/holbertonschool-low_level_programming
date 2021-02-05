#include <stdio.h>

/**
 * main - Prints base16 numbers
 * Return: Returns 0-9 then a-f
 */

int main(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
putchar(i + '0');
for (c = 'a'; c < 'g'; c++)
putchar(c);
putchar('\n');
return (0);
}
