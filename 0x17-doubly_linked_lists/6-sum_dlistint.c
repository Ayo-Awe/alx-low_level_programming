#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - sums all elements of a list
 * @head: pointer to head of list
 *
 * Return: sum of elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
