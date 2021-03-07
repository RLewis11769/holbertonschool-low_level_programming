#include <stdio.h>

/**
 * main - Prints size of common data types
 * Return: 0 if successful
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long);
	lli = sizeof(long long);
	f = sizeof(float);

	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of an int: %d byte(s)\n", i);
	printf("Size of a long int: %d byte(s)\n", li);
	printf("Size of a long long int: %d byte(s)\n", lli);
	printf("Size of a float: %d byte(s)\n", f);

	return (0);
}
