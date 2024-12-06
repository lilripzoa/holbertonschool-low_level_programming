#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of a linked list
 * @head: pointer.
 * Return: if the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int somme = 0;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;

	while (ptr != NULL)
	{
		somme += ptr->n;
		ptr = ptr->next;
	}
	return (somme);
}
