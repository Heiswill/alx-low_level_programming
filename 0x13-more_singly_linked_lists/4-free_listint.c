#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Function that frees listint_t list.
 * @head: Pointer to the first node
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
