#include <stdio.h>

/**
 * main - Prints 0 to 9 separated by commas
 * Return: Returns 0 if successful
 */

int main(void){
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
