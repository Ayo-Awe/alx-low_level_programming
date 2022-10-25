#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head of a list
 * @head: a pointer to pointer to the address of head
 *
 * Return: the data stored in the previous head
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_head;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	new_head = (*head)->next;

	free(*head);

	*head = new_head;

	return (data);
}
