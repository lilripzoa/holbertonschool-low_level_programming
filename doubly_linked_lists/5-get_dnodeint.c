#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer.
 * @index: index of the node.
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}

	return (NULL);
}
