#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to pointer at beginning of linked list
 * @idx: position where new node should be added
 * @n: data to be inserted at given position
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *temp;
	listint_t *h;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	h = *head;

	temp->n = n;
	temp->next = NULL;

	for (x = 0; x < idx - 1; x++)
		h = h->next;

	temp->next = h->next;
	h->next = temp;

	free(temp);
	free(h);

	return (*head);
}
