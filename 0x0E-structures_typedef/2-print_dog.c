#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

#ifdef NULL
#undef NULL
#endif

#define NULL "(nil)"


/**
 * print_dog - prints "struct dog"
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == 00)
		exit(1);
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %0.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
