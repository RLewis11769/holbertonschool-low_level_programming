#include <stdio.h>

/**
 * main - 
 * Return: 
 */

int main(void)
{
  int let;
  for(let = 'a'; let <= 'z'; let++)
    putchar(let);
  for(let = 'A'; let <= 'Z'; let++)
    putchar(let);
  putchar('\n');
 return 0;
}
