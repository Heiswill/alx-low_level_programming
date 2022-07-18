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
	int i;
	listint_t *ptr, *tmp;

	if (head == NULL)
		return (0);
	ptr = tmp = *head;
	while (*head)
	{
		i = ptr->n;
		*head = ptr->next;
		free(tmp);
	}
	i = 0;
	return (i);
}
