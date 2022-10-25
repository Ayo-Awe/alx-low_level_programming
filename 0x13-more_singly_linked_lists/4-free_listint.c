#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t
 * @head: pointer to head of list
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	/* Set current node to head */
	current =  head;

	while (current)
	{
		/* Move on to next node */
		next = current->next;

		free(current);

		current = next;
	}

}
