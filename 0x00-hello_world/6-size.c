#include <stdio.h>
int main(void)
/**
 * main - Prints series of strings
 * c - character data type
 * i - integer data type
 * l - long data type
 * ll - long long data type
 * f - float data type
 * Return : Returns the strings
 */
{
char c;
int i;
long l;
long long ll;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}

