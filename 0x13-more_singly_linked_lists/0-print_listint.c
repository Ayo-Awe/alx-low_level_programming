#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all nodes of a lists
 * @h: pointer to head of list
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *current;

	/* Set current node to head */
	current =  (listint_t *) h;
	while (current)
	{
		printf("%d\n", current->n);

		/* Move on to next node */
		current = current->next;

		/* Increment count */
		count++;
	}

	return (count);

}
