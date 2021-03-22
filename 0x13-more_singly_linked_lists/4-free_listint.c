#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees all elements of linked list
 * @head: pointer to beginning of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
