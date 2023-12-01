#include "hash_tables.h"

/**
 * hash_table_get - Function to find a key in @ht.
 * @ht: Hash table to look in.
 * @key: The key to look for.
 * Return: Value associated to the key, Null otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	if (!node || node == NULL || !ht || !key)
		return (NULL);

	if (strcmp(node->key, key) == 0)
		return (node->value);

	return (NULL);
}
