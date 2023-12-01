#include "hash_tables.h"

/**
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}

	return (0);
}
