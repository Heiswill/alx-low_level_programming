#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Functions that returns the number of elements
 * in a linked list.
 * @h: Pointer to the first node
 * Return: (0);
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
