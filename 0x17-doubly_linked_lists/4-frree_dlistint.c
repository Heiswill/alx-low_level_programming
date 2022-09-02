#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
