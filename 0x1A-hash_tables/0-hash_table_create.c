#include "hash_tables.h"

/**
 * hash_table_create - Function to create a hash table
 * containing array of nodes.
 * @size: Size of a table to be created.
 * Return: Pointer to the created table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(size * sizeof(hash_table_t *));

	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
