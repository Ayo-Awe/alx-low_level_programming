#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - adds node to beginning of list
 * @head: pointer to pointer to head of list
 * @n: value of new element
 *
 * Return: address of new element or NULL on error
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	/* Initialise new node*/
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* Create new node make node head*/
	if (*head == NULL)
		return (*head = new_node);

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
