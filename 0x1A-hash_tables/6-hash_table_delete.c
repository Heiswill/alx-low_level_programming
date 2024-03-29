#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *hash_table_delete - deletes a hash table
 *@ht: the hash table
 *
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	hash_table_t *head = ht;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
