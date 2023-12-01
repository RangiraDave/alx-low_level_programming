#include "hash_tables.h"

/**
 * hash_table_set - Function to insert a new item (key/value pair)
 * into the hash table and handle collisions by adding the new item
 * to the head of the list at the index.
 * @ht: Pointer to the hash table.
 * @key: The key for the new item.
 * @value: The value for the new item.
 * Return: 1 if successful, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key)
		return (0);

	node = malloc(sizeof(hash_node_t *));
	if (!node)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
