#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert node at index
 * @idx: index of node to be retrieved
 * @h: pointer to pointer to head of list
 * @n: value of node
 *
 * Return: address of node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new_node = NULL;
	unsigned int current_index = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	current = *h;
	if (idx == 0)
	{
		if (*h == NULL)
			return (*h = new_node);

		*h = new_node;
		new_node->next = current;
		current->prev = new_node;
		return (new_node);
	}

	while (current)
	{
		if (current_index == idx)
		{
			new_node->prev = current->prev;
			current->prev = new_node;
			new_node->next = current;
			(new_node->prev)->next = new_node;
			return (new_node);
		}
		current_index++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
