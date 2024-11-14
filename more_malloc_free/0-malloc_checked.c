#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: memory.
 * Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *y;

	y = malloc(b);

	if (y == NULL)
	{
		exit(98);
	}

	return (y);
}
