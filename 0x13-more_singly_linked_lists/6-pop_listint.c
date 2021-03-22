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
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (-1);

	if (head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
	}
	return (temp->n);
}
