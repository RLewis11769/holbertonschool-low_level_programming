#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dogs to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Ints don't need to be freed */
		free(d->name);
		free(d->owner);
		free(d);
	}
}
