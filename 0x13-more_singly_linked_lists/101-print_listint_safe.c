#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list safely
 * @head: list to print
 * Return: Number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int check;

	while (head)
	{
		check = head - head->next;
		num++;
		printf("[%p} %d\n", (void *)head, head->n);
		if (check > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
