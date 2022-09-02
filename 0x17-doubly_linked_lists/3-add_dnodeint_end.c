#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at end of list
 * @head: pointer to dllist
 * @n: node data
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tp;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tp = *head;
	if (tp != NULL)
	{
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = new;
		new->prev = tp;
	}
	else
		*head = new;
	return (new);
}
