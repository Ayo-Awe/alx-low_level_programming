#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - deletes a node at given index
 * @index: index of node to be deleted
 * @head: pointer to pointer to head of list
 *
 * Return: 1 on success and -1 on error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	dlistint_t *previous = NULL;
	dlistint_t *next = NULL;
	unsigned int current_index = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		next = current->next;
		*head = next;

		if (next)
			next->prev = NULL;

		free(current);
		return (1);
	}
	while (current)
	{
		if (current_index == index)
		{
			previous = current->prev;
			next = current->next;

			previous->next = next;

			if (next)
				next->prev = previous;

			free(current);
			return (1);
		}
		current_index++;
		current = current->next;
	}

	return (-1);
}
