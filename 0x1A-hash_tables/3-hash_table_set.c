#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - sets a key-value pair in the supplied has table
 * @ht: pointer to hash table
 * @key: key of key-value pair
 * @value: value of key-value pair
 *
 * Return: returns 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *node = NULL;

	if (!ht || !key || value == NULL)
		return (0);

	/* Hash key into an index */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if a node with this key already exists */
	node = find_node(ht->array[index], key);

	/* Update existing node */
	if (node)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}

	/* Add New Node */
	node = add_node(&(ht->array[index]), key, value);

	/* Successfully Added New Node */
	if (node)
		return (1);

	return (0);
}

/**
 * add_node - adds a new node to the top of a linked list
 * @head: pointer to head of linked list
 * @key: key of key-value pair
 * @value: value to be stored in linked list
 *
 * Return: pointer to new node on success otherwise NULL
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *current = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));

	/* Malloc Failure */
	if (!new_node)
		return (NULL);

	/* Initialise new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/* Empty list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Add Node to top of list */
	current = *head;
	*head = new_node;
	new_node->next = current;

	return (new_node);
}

/**
 * find_node - finds the node that has a given key in a linked list
 * @head: head of linked list
 * @key: node's key
 *
 * Return: pointer to node or NULL
 */
hash_node_t *find_node(hash_node_t *head, const char *key)
{
	hash_node_t *current = NULL;

	if (!head || !key)
		return (NULL);

	current = head;

	while (current)
	{
		/* Check if this node's key matches our search key */
		if (strcmp(current->key, key) == 0)
			return (current);

		current = current->next;
	}

	return (NULL);
}
