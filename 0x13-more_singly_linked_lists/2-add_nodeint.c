#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds new node to linked list
 * @head: pointer to head of list
 * @n: number to store in the new node
 *
 * Return: pointer to new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	/* if malloc fails */
	if (!new)
		return (NULL);

	/* Assign values to new */
	new->n = (int) n;
	new->next = *head;

	*head = new;

	return (new);
}
