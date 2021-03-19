#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of linked list
 * @h: pointer to beginning of linked list aka head
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
