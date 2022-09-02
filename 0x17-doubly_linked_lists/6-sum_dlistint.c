#include "lists.h"
#include <stdio.h>
#include <stdlib>
/**
 * sum_dlistint - summ of all data in the list
 * @head: pointer to list
 * Return: sum, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int dsum = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
