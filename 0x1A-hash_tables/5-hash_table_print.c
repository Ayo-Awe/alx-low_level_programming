#include "hash_tables.h"
#include <stdio.h>

void print_list(hash_node_t *head, unsigned int *print_count);
void print_node(hash_node_t *node, unsigned int print_count);

/**
 * hash_table_print - prints out the elements of a hash table
 * @ht: pointer to hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	unsigned int print_count = 0;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		print_list(ht->array[i], &print_count);
	}
	puts("}");
}

/**
 * print_list - prints all the nodes in a linked list
 * @head: head of linked list
 * @print_count: pointer to number of key-value pairs already printed
 *
 * Return: void
 */
void print_list(hash_node_t *head, unsigned int *print_count)
{
	hash_node_t *current = NULL;

	if (!head)
		return;

	current = head;

	while (current)
	{
		print_node(current, *print_count);
		*print_count += 1;
		current = current->next;
	}
}

/**
 * print_node - prints the value of a single node in a linked list
 * @node: pointer to node of linked list
 * @print_count: number of key-value pairs already printed
 *
 * Return: void
 */
void print_node(hash_node_t *node, unsigned int print_count)
{
	if (!node)
		return;

	/* Print node in the required format */
	if (print_count > 0)
		printf(", '%s': '%s'", node->key, node->value);
	else
		printf("'%s': '%s'", node->key, node->value);
}
