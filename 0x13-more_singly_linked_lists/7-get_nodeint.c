#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Functioin that returns the nth node ofa listint_t
 * linked list.
 * @head: pointer to first node
 * @index: index of the node, starting at 0.
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
