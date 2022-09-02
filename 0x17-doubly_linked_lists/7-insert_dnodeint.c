#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to nodes
 * @idx: index to insert
 * @n: new node data
 * Return: address of new node, Null if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	unsigned int i = 0;

	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	temp = *h;
	if (new == NULL)
		return (NULL);
	while (temp->prev != NULL)
		temp = temp->prev;
	while (temp != NULL)
	{
		if (i == idx)
		{
			temp->n = n;
			temp->next = new;
			new->prev = temp;
		}
		i++;
		temp = temp->next;
	}
	*h = temp;
}
