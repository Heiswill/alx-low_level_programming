#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: Pointer to first node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}
	*head = NULL;
}
