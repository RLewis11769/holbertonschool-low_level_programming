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
	/* points at new struct at idx with data n */
	listint_t *temp;
	/* points at position before new struct inserted */
	listint_t *h;

	if (head == NULL) /* check for NULL input */
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
	/* points h at position before to be inserted*/
	while (h->next != NULL)
	{
		/* 0-based index, 1-based index would be idx - 2 */
		if (x == (idx - 1))
		{
			/* points new struct at position after it should be */
			temp->next = h->next;
			/* points struct before to new struct */
			h->next = temp;
			return (temp);
		}
		x++;
		h = h->next;
	}
	free(temp);
	return (NULL);
}
