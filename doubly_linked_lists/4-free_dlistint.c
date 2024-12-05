#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	dlistint_t *i;

	ptr = head;

	while (ptr != NULL)
	{
		i = ptr->next;
		free(ptr);
		ptr = i;
	}

}
