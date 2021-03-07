#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints number and if last digit is 0, greater than 5 or less
 * Return: 0 if successful
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	last = n % 10;

	if (last == 0)
		printf("%d and is 0\n", last);
	else if (last > 5)
		printf("%d and is greater than 5\n", last);
	else
		printf("%d and is less than 6 and not 0\n", last);

	return (0);
}
