#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: pointer to hash table
 * @key: key to retrieve value with
 *
 * Return: string pointer to value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long index;

	/* Validate inputs */
	if (!ht || !key)
		return (NULL);

	/* Hash key to get index */
	index = key_index((const unsigned char *)key, ht->size);

	/* Find node associated with key in list */
	node = find_node(ht->array[index], key);

	/* Return value associated with the key */
	if (node)
		return (node->value);

	return (NULL);
}
