#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: a pointer to the pointer to the address of head
 * @index: index of the node
 *
 * Return: 1 if successful and -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int current_count = 0;


	if (index == 0 && *head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}


	/* Set current node to head */
	current = *head;

	while (current)
	{
		if (current_count + 1 == index)
		{
			tmp = current->next;
			current->next = tmp->next;
			free(tmp);
			return (1);
		}

		current_count++;
		current = current->next;
	}

	return (-1);
}
