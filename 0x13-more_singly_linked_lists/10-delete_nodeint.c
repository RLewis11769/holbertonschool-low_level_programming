#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given position
 * @head: pointer to pointer at beginning of linked list
 * @index: position where new node should be added
 * Return: 1 if successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp;
	listint_t *delete;

	if (head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	/* points temp at position before deletion */
	for (x = 0; x < index - 1; x++)
		temp = temp->next;

	/* if trying to delete position that does not exist */
	if (index > x)
	{
		free(temp);
		return (-1);
	}

	/* points delete at position to be deleted */
	delete = temp->next;
	/* points temp at position after deletion, skipping over delete */
	temp->next = delete->next;
	free(delete);

	return (1);
}
