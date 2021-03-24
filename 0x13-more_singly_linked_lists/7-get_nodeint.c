#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds specific node of linked list
 * @head: pointer to beginning of linked list
 * @index: number of node to find
 * Return: integer at index node of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	/* note that head in this function is a temp head not actual head */
	for (count = 0; head != NULL; count++)
	{
		if (count == index)
			/* temp head points at correct struct */
			return (head);
		/* moves temp head forward until count == index OR end of list */
		head = head->next;
	}

	return (NULL);
}
