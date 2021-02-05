#include <stdio.h>

/**
 * main - Prints 0 to 9
 * Return: String of numbers
 */

int main(void)
{
int i;
i = 0;
while (i < 10)
{
printf("%d", i);
i++;
}
putchar('\n');
return (0);
}
