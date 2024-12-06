#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node of a linked list
 * @head: pointer.
 * @index: index
 * Return: 1 if it succeeded, -1 if failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (-1);
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;
	free(ptr);
	return (1);
}
