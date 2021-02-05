#include <stdio.h>

/**
 * main - Prints alphabet backwards
 * Return: Returns alphabet string
 */

int main(void)
{
int let;
for (let = 'z'; let >= 'a'; let--)
putchar(let);
putchar('\n');
return (0);
}
