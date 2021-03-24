#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete head node and return data it holds
 * @head: pointer to pointer to beginning of linked list
 * Return: data stored in head node that is deleted
 */

int pop_listint(listint_t **head)
{
	int storeN = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		/* points at head node to store head node's value */
		storeN = (*head)->n;
		/* points temp at head node */
		temp = *head;
		/* point head at new head, the second node */
		*head = (*head)->next;
		/* frees what temp is pointing at, the original head node */
		free(temp);
	}

	return (storeN);
}
