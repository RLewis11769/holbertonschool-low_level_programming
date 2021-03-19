#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts all elements in linked list
 * @h: pointer to beginning of linked list aka head
 * Return: number of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
