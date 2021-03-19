#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees all elements in linked list
 * @head: pointer to beginning of linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;

	}
}
