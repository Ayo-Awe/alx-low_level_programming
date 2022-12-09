#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

int length_of_list(const dlistint_t *h);

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
		return (add_dnodeint(h, n));

	if ((int)idx == length_of_list(*h))
		return (add_dnodeint_end(h, n));

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

/**
 * length_of_list - returns length of ist
 * @h: head of list
 *
 * Return: size of list
 */
int length_of_list(const dlistint_t *h)
{
	dlistint_t *current = NULL;
	int count = 0;

	current = (dlistint_t *)h;

	while (current)
	{
		current = current->next;
		count++;
	}

	return (count);
}
