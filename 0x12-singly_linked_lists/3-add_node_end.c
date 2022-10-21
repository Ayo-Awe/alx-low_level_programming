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

	if (str)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
	}
	else
	{
		new->str = NULL;
		new->next = NULL;
	}

	current = *head;

	/* make new head if head is null */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Get last node */
	current = get_last_node(*head);

	current->next = new;

	return (new);
}


/**
 * get_last_node - returns the last node of a list
 * @head: head of the list
 *
 * Return: returns pointer to the last node of the list
*/
list_t *get_last_node(list_t *head)
{
	list_t *current;

	current = head;

	/* Get last node i.e node where next is NULL */
	while (current->next != NULL)
		current = current->next;

	return (current);
}
