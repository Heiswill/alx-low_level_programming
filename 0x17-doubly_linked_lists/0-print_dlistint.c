#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_dlistint - prints all element in a doubly linked list
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
