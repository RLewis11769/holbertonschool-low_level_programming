#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to pointer to beginning of linked list
 * Return: new head (old tail) of list
 */

listint_t *reverse_listint(listint_t **head)
{
	/* starts at head and moves to NULL ahead of head */
	listint_t *current;
	/* always points at NULL or backwards, will become new head */
	listint_t *previous = NULL;

	if (head == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		/* points current to next position */
		current = current->next;
		/* points head at previous position */
		(*head)->next = previous;
		/* points previous to next position */
		previous = *head;
		/* points head to next position */
		*head = current;
	}
	/* points head at new beginning of list where previous was pointing */
	*head = previous;
	return (*head);
}
