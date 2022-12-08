#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints all the elements in a doubly linked list
 * @h: head of list
 *
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = NULL;
	size_t count = 0;

	current = (dlistint_t *)h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
