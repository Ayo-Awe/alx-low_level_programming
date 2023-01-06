#include "hash_tables.h"
#include <stdlib.h>

void free_node(hash_node_t *node);
void free_list(hash_node_t *head);

/**
 * hash_table_delete - frees all the memory allocated to a hash table
 * @ht: pointer to a hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}

	free(ht->array);
	free(ht);
}

/**
 * free_list - frees all the nodes in a linked list
 * @head: head of linked list
 *
 * Return: void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *current = NULL;
	hash_node_t *next = NULL;

	if (!head)
		return;

	current = head;

	while (current)
	{
		next = current->next;

		free_node(current);
		current = next;
	}
}

/**
 * free_node - frees the a single node in a linked list
 * @node: pointer to node of linked list
 *
 * Return: void
 */
void free_node(hash_node_t *node)
{
	if (!node)
		return;

	/* Free all memory allocated to this node */
	free(node->key);
	free(node->value);
	free(node);
}
