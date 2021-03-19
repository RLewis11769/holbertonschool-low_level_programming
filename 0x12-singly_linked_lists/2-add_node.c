#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a linked list
 * @head: pointer to beginning of linked list aka head
 * @str: data to be added to beginning of list
 * Return: address of last element added to list (aka new head)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int length = 0;

	if (head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	newNode->str = strdup(str);
	newNode->len = length;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
