#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates block of memory
 * @ptr: pointer to previously allocated memory
 * @old_size: size of old space
 * @new_size: size of new space
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new = NULL;

	/* No change */
	if (new_size == old_size)
		return (ptr);

	/* If new size is zero, free existing memory */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If no existing memory allocated, just malloc */
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}

	/* In all other cases, malloc and free */
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	free(ptr);

	return (new);
}
