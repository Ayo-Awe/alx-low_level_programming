#include "hash_tables.h"
/**
 * key_index - returns the index at which the element with the given
 * key should be stored
 * @key: key that maps to a specific value
 * @size: size of the hash table
 *
 * Return: index at which the element with the given key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	/* Generate hash from the key */
	hash = hash_djb2(key);

	/* Convert hash to a value within the given hash table size */
	index = hash % size;

	return (index);
}
