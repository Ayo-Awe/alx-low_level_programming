#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the beginning of the linked list
 * @head: pointer list_t pointer
 * @str: string text
 *
 * Return: address of new node or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
