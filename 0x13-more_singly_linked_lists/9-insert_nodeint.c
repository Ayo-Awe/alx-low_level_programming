#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at idx
 * @head: a pointer to the pointer to the address of head
 * @idx: index of the node
 * @n: number to be stored in node
 *
 * Return: a pointer to the node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int current_count = 0;

	new = malloc(sizeof(listint_t));

	/* if malloc fails */
	if (!new)
		return (NULL);

	/* Assign values to new */
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}


	/* Set current node to head */
	current = *head;

	while (current)
	{
		if (current_count + 1 == idx)
		{
			new->next = current->next;
			current->next = new;
		}

		current_count++;
		current = current->next;
	}

	return (NULL);
}
