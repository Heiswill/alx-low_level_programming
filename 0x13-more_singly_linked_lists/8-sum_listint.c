#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Function that returns sum of all the data(n) of a
 * listint_t linked list.
 * @head: Pointer to first node
 * Return: Total sum.
 */
int sum_listint(listint_t *head)
{
	if (head == 0)
		return (0);
	else
		return sum_listint(head->next) + head->n;
}
