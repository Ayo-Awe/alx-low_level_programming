#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints the elements in a linked lists
 * @h: head of linked list
 *
 * Return: the number of elements in the linked list
*/
size_t print_list(const list_t *h)
{
	list_t *current;
	size_t i = 0;

	current = (list_t *) h;

	while (current != NULL)
	{
		if (current->str)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
		current = current->next;
	}

	return (i);

}
