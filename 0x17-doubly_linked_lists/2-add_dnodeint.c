#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_dnodeint - add node at beginning
 * @head: pointer to list
 * @n: new node data
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
		temp->next = h;
		h->prev = temp;
	}
	*head = temp;

	return (*head);
}
