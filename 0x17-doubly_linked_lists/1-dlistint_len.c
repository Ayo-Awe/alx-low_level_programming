#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * dlistint_len - returns length of ist
 * @h: head of list
 *
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = NULL;
	size_t count = 0;

	current = (dlistint_t *)h;

	while (current)
	{
		current = current->next;
		count++;
	}

	return (count);
}
