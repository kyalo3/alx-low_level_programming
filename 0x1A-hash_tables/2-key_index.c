#include "hash_tables.h"
/**
 * key_index - Computes the index of a key in a hash table.
 * @key: The key to be hashed.
 * @size: The size of the hash table.
 *
 * Return: The index at which the key should be stored in the hash table.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);

	hash = hash_djb2(key);
	return (hash % size);
}
