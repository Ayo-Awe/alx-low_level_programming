#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t and sets head to null
 * @head: pointer to pointer head of list
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (!head)
		return;

	/* Set current node to head */
	current = *head;

	if (!current)
		return;

	while (current)
	{
		/* Move on to next node */
		next = current->next;

		free(current);

		current = next;
	}

	*head = NULL;

}
