#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a list
 * @h: pointer.
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
