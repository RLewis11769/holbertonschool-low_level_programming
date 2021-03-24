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
	listint_t *temp; /* points at new struct at idx with data n */
	listint_t *h; /* points at position before new struct inserted */

	if (head == NULL)
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

	/* 0-based index, 1-based index would be idx - 2 */
	for (x = 0; x < idx - 1; x++)
	{
		/* moves h forward until 1 before where should be inserted */
		h = h->next;
		/* condition for position to be inserted larger than exists */
		if (h->next == NULL)
		{
			free(temp);
			return (NULL);
		}
	}
	/* points new struct at position after where it should go */
	temp->next = h->next;
	/* points struct 1 behind inserted position at new struct */
	h->next = temp;

	return (temp);
}
