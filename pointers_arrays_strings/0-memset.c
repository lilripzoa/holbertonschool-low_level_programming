#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory.
 * @b: constant byte.
 * @n: first byte.
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
