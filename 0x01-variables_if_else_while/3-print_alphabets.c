#include <stdio.h>

/**
 * main - Prints alphabet in lowercase then uppercase
 * Return: Returns 1 string
 */

int main(void)
{
int let;
for (let = 'a'; let <= 'z'; let++)
putchar(let);
for (let = 'A'; let <= 'Z'; let++)
putchar(let);
putchar('\n');
return (0);
}
