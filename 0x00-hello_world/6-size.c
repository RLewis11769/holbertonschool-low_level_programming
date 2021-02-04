#include <stdio.h>
/**
 * main - Prints size of common data types
 * Return: Returns the sizes of data types in strings
 */

int main(void)
{
char c;
int i;
long l;
long long ll;
float f;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}

