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
	int data;
	listint_t *ptr, *tmp;

	if (head == NULL)
		return (0);
	ptr = tmp = *head;
	if (*head)
	{
		data = ptr->n;
		*head = ptr->next;
		free(tmp);
		free(ptr);
		tmp = NULL;
		ptr = NULL;
	}
	else
		data = 0;
	return (data);
}
