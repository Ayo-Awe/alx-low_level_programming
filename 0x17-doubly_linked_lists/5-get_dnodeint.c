#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - gets node at index
 * @index: index of node to be retrieved
 * @head: pointer to head of list
 *
 * Return: address of node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int current_index = 0;

	/* Do nothing if head is null */
	if (head == NULL)
		return (NULL);

	current = head;

	while (current)
	{
		if (current_index == index)
			return (current);

		current_index++;
		current = current->next;
	}

	return (NULL);
}
