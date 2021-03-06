#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list.
 * @h: Pointer to first node
 * Return: numberof elements in freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int check;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		check = *h - (*h)->next;
		if (check > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
