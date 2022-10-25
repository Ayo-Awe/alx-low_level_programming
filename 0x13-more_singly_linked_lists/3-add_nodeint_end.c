#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds node to the end of a linked list
 * @head: a pointer to the address of head
 * @n: the number to be stored in the new node
 *
 * Return: a pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	/* if malloc fails */
	if (!new)
		return (NULL);

	/* Assign values to new */
	new->n = (int) n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Set current node to head */
	current = *head;

	while (current->next)
	{
		current = current->next;
	}


	current->next = new;
	return (new);
}
