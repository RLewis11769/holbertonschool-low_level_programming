#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dogs to be freed
 */

void free_dog(dog_t *d)
{
	free(d);
}
