#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in linked list
 * @h: beginning of linked list (aka head)
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
