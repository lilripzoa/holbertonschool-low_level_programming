#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: an array.
 * @size: integer.
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i, longueur;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	longueur = nmemb * size;

	a = malloc(longueur);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < longueur; i++)
	{
		a[i] = 0;
	}

	return (a);
}
