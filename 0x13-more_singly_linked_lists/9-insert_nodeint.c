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
	unsigned int x = 0;
	listint_t *temp;
	listint_t *h;

	if (*head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}

	h = *head;

	for (x = 0; x < idx - 1; x++)
	{
		h = h->next;
		if (h->next == NULL)
		{
			free(temp);
			return (NULL);
		}
	}

	temp->next = h->next;
	h->next = temp;

	return (temp);
}
