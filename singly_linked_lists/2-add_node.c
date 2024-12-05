#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list.
 * @head: beginning of a list.
 * @str: string
 * Return: the adress of the new element or null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(len + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (i < len)
	{
		new_node->str[i] = str[i];
		i++;
	}
	new_node->str[i] = '\0';

	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
