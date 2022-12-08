#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	dlistint_t *next = NULL;

	/* Do nothing if head is null */
	if (head == NULL)
		return;

	current = head;

	/* Free list from top to bottom */
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
