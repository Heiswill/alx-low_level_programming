#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t *temp = malloc(sizeof(size_t));
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		temp = h;
		h = h->next;
		count += 1;
	}
	return (count);
}
