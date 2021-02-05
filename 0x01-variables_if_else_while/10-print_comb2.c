#include <stdio.h>

/**
 * main - Prints numbers from 00 to 99
 * Return: Return set of comma-separated integers
 */

int main(void)
{
float f;
f = 00;
while (f < 100)
{
f++;
putchar(f + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
