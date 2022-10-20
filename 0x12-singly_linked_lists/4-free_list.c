#include <stdlib.h>
#include "lists.h"

/**
 * free_list - fress a malloc'd list_t
 * @head: head of the list
 *
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;

		if (current->str != NULL)
			free(current->str);


		free(current);

		current = next;
	}
}
