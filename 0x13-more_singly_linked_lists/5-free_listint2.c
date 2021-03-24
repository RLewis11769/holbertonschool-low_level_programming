#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees all elements of linked list and sets head to NULL
 * @head: pointer to pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* checks if passed empty list in which case there is nothing to free */
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		/* points at second node in list */
		temp = (*head)->next;
		/* frees first node in list */
		free(*head);
		/* points at first node in the list, the former second node */
		*head = temp;
	}
}
