#include <stdlib.h>

/**
 * _memcpy - copies memory area to new location
 * @src: pointer to source
 * @dest: pointer to destination
 * @n: number of bytes copied over
 * Return: pointer to new memory dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}

/**
 * _realloc - reallocates block of memory
 * @ptr: pointer to previously allocated memory
 * @old_size: size of old space
 * @new_size: size of new space
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == old_size)
		return (ptr);

	if (old_size > new_size)
	{
		new = malloc(sizeof(void *) * new_size);
		if (new == NULL)
		{
			free(new);
			return (new);
		}
		_memcpy(new, ptr, new_size);
		free(ptr);
	}

	if (new_size > old_size)
	{
		new = malloc(sizeof(void *) * (old_size + new_size));
		if (new == NULL)
		{
			free(new);
			return (new);
		}
		_memcpy(new, ptr, old_size);
		free(ptr);
	}

	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		new = malloc(new_size);

	return (new);
}
