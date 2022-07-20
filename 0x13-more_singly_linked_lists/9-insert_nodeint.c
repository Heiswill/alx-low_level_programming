#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that inserts a new-
 * -node at a given position.
 * @head: Pointer to first node
 * @idx: index of the list where the new node should be added
 * @n: data
 * Return: The address of the new node at index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));

	if (ptr2 ==  NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;
	if (idx == 0)
	{
		ptr2->next = ptr;
		*head = ptr2;
		return (*head);
	}
	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
		if (!ptr)
		{
			free(ptr2);
			return (NULL);
		}
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
