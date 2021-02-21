#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen - generate random valid passwords for 101-crackme
 */

int main(void)
{
	srand(time(NULL));
	int code = rand();

	printf("%d", code);

	return (0);
}
