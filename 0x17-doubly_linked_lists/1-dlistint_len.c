#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: pointer to dlist
 * Return: 0 if NULL
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
