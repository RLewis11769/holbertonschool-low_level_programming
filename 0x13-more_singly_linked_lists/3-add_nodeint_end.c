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

	/* cycles through list until second-to-last is pointing at temp head */
	while (*head != NULL)
		head = &(*head)->next;

	/* points temp head at last in list */
	*head = newNode;

	return (newNode);
	/* note that at the end, temp head is between second-to-last and last */
}
