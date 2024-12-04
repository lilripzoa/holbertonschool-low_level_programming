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
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
