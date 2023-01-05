#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table with size number of elements
 * @size: size of the hash table
 *
 * Return: pointer to new hash_table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **array = NULL;

	/* Allocate memory for a new hash_table */
	ht = malloc(sizeof(hash_table_t));

	/* Malloc failure */
	if (!ht)
		return (NULL);

	/* Allocate memory for array of hash nodes */
	array = malloc(sizeof(hash_node_t *) * size);

	/* Malloc Failure */
	if (!array)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = array;

	return (ht);
}
