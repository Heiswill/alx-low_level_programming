#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes the node at index.
 * @head: Pointer to first node
 * @index: index of node to delete
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = NULL;
	listint_t *prev = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	while (i < index - 1)
	{
		if (!prev || !(prev->next))
			return (-1);
		prev = prev->next;
		i++;
	}
	curr = prev->next;
	prev->next = curr->next;
	free(curr);
	return (1);
}
