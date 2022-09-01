#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * dlistlint_len - returns number of elements in a doubly linked list
 * @h: pointer to dlist
 * Return: 0 if NULL
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
