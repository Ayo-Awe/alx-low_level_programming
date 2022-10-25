#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * sum_listint - sums all elements in a linked list
 * @head: pointer to head of list
 *
 * Return: sum of node data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	/* Set current node to head */
	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
