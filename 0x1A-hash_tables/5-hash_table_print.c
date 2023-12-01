#include "hash_tables.h"

/**
 * hash_table_print - Function to print elements in a hash table.
 * @ht: Pointer to the hash table.
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int last_pair = 1;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (!last_pair)
				printf(", ");
			if (printf("'%s': '%s'", node->key, node->value))
				last_pair = 0;

			if (node->next != NULL)
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
