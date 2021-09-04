#include "holberton.h"

/**
 * reverse_array - reverse content of array of integers
 * @a: pointer to array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start;
	int end = n - 1;

	for (start = 0; start < end / 2; start++)
	{
		/* Simple swap of characters */
		/* Only need to go through half of array because start/end are swapping */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		/* Decrement end pointer */
		end--;
	}
}
