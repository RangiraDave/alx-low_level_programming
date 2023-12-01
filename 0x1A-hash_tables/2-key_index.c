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
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
