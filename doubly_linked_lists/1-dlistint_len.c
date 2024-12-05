#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a list.
 * @h. pointer.
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
