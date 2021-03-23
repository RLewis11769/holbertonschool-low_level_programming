#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - adds all data in each node of linked list
 * @head: pointer to beginning of linked list
 * Return: sum of data in list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
