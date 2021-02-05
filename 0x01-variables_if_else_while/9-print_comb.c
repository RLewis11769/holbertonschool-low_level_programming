#include <stdio.h>

/**
 * main - Prints 0 to 9 separated by commas
 * Return: Returns comma-separated string
 */

int main(void)
{
int num;
num = 0;
while (num < 10)
{
num++;
putchar(num + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
