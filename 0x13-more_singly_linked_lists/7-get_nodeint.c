#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns a pointer to the node at index
 * @head: a pointer to the address of head
 * @index: index of the node
 *
 * Return: a pointer to the node or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int current_count = 0;

	/* Set current node to head */
	current = head;

	while (current)
	{
		if (current_count == index)
			return (current);

		current_count++;
		current = current->next;
	}

	return (NULL);
}
