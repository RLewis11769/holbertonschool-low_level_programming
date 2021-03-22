#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all integer elements of linked list
 * @h: beginning of linked list (aka head)
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
