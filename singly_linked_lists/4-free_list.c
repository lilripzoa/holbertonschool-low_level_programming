#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: list.
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *ptr;
	list_t *i;

	ptr = head;

	while (ptr != NULL)
	{
		i = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = i;
	}
}
