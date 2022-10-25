#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - prints all nodes of a lists
 * @h: pointer to head of list
 *
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *current;

	/* Set current node to head */
	current =  (listint_t *) h;
	while (current)
	{
		/* Move on to next node */
		current = current->next;

		/* Increment count */
		count++;
	}

	return (count);

}
