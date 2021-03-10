#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes functions based on arrays given
 * @array: array passed in
 * @size: size of each array
 * @action:  function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((size > 0) && (action != NULL) && (array != NULL))
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
