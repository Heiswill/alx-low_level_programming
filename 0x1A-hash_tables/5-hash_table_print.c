#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *hash_table_print - prints a hash table in the order they appear
 *in the hash table array
 *@ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int cont = 0, i = 0;
	hash_node_t *node;

	if (ht != NULL)
	{
		printf("{");
		for (cont = 0; cont < ht->size; cont++)
		{
			node = ht->array[cont];
			while (node != NULL)
				if (i != 0)
				{
					printf(", ");
					i = 1;
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
				}
		}
		printf("}\n");
	}
}
