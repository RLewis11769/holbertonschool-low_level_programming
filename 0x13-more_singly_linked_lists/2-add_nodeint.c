#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of linked list
 * @head: pointer to beginning of linked list
 * @n: data to be added to beginning of linked lis
 * Return: pointer to address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	/* adds data to newly-created location */
	temp->n = n;
	/* points newly-created struct back at head */
	temp->next = *head;
	/* points head at temp so list is now backward */
	*head = temp;

	return (*head);
}
