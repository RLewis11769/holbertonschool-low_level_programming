#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer based on function passed in
 * @array: array passed in
 * @size: number of elements in array
 * @cmp: function pointer
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if ((array != NULL) && (cmp != NULL) && (size > 0))
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) == 1)
				return (x);
		}
		return (-1);
	}
	return (-1);
}
