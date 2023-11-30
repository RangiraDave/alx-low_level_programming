#include "hash_tables.h"

/**
 * key_index - Function to find the index to which a key/value
 * pair is stored in.
 * @key: The key to look for.
 * @size: Size of the array.
 * Return: The index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *ht = hash_table_create(size);
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int i, index = hash_value % size;

	for (i = 0; i < size; i++)
	{
		if (i == index && ht->array[i] != NULL)
			if (strcmp((const char *)ht->array[i]->key, (const char *)key) == 0)
		{
			free(ht);
			return (i);
		}
	}

	free(ht);
	return (-1);
}
