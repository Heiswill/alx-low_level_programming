#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Function that adds a new node a the beginning
 * of a linked list.
 * @head: pointer to first node
 * @n: new first node
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = (*head);
	(*head) = tmp;
	return (*head);
}
