#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the headnode of a
 * linked list.
 * @head: pointer to first node
 * Return: (0) if linked list is empty.
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
