#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add new integer node at end of linked list
 * @head: pointer to beginning of linked list
 * @n: integer to be added to end of list
 * Return: pointer to address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	while (*head != NULL)
		head = &(*head)->next;

	*head = newNode;

	return (newNode);
}
