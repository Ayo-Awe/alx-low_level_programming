#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - adds node to end of list
 * @head: pointer to pointer to head of list
 * @n: value of new element
 *
 * Return: address of new element or NULL on error
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	/* Initialise new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* Make new node head if head is null */
	if (*head == NULL)
		return (*head = new_node);

	current = *head;

	/* Cycle to end of list */
	while (current->next)
		current = current->next;

	/* Set node as ending node */
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
