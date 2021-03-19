#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node to end of linked list
 * @head: pointer to beginning of linked list
 * @str: data to be added to end of linked list
 * Return: address of new element added (aka new tail)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	int length = 0;

	if (head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	newNode->str = strdup(str);
	newNode->len = length;
	newNode->next = NULL;

	while (*head != NULL)
		head = &(*head)->next;
	*head = newNode;

	return (newNode);
}
