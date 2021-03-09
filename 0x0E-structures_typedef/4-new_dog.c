#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog info
 */

void dog_t *new_dog(char *name, float age, char *owner)
{
	void *newDog;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
}
