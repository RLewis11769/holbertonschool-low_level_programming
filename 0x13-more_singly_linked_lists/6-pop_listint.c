#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete first node and return head node's data
 * @head: pointer to pointer to beginning of linked list
 * Return: data stored in head node that is deleted
 */

int pop_listint(listint_t **head)
{
	int storeN = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		storeN = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (storeN);
}
