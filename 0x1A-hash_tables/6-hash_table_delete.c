#include "hash_tables.h"

/**
 * hash_table_delete - Function to delete a hash table.
 * @ht: Pointer to the hash table.
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			free(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}
