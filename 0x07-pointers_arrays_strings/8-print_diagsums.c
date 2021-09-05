#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals of matrix
 * @a: pointer to 2d array
 * @size: 2 digits, with 1 for the size of each array
 */

/*
 *	Example:
 *		A B C
 *		D E F
 *		G H I
 *
 *	sumLR = A + E + I (which is index 0 + 4 + 8)
 *		Index: 0 + 4 + 4 while 3x3 matrix means add (index + 1) every time
 *		Index: 0 + (size + 1) + (size + 1)
 *	sumRL = C + E + G (which is index 2 + 4 + 6)
 *		Index: 2 + 2 + 2 while 3x3 matrix means add (index - 1) every time
 *		Index: (size - 1) + (size - 1) + (size - 1)
*/

void print_diagsums(int *a, int size)
{
	int x;
	int sumLR = 0;
	int sumRL = 0;

	/* Add LR diagonal based on (size + 1) equation */
	for (x = 0; x < size * size; x += (size + 1))
		sumLR += a[x];
	/* Add RL diagonal based on (size - 1) equation */
	/* While x is less than size of matrix until reach beginning */
	for (x = size - 1; x < ((size * size) - size + 1); x += (size - 1))
		sumRL += a[x];
	printf("%d, %d\n", sumLR, sumRL);
}
