#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end of a list
 * @head: pointer to a list_t pointer
 * @str: string
 *
 * Return: pointer to new malloc'd list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	/* check if head is null*/
	if (head == NULL)
		return (NULL);

	/* create new list*/
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	current = *head;

	/* make new head if head is null */
	if (current == NULL)
	{
		*head = new;
		return (new);
	}

	/* Get last node */
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;

	return (new);
}
