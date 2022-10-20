#include "lists.h"
#include  <stddef.h>

/**
 * list_len - returns length of singly linked list
 * @h: head of linked list
 *
 * Return: length of list
*/
size_t list_len(const list_t *h)
{
	list_t *current;
	size_t i = 0;

	current = (list_t *) h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}

	return (i);

}
