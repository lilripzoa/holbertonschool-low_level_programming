#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: string.
 * @src: string.
 * @n: bytes.
 * Return: a pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[i] = src[x];
		i++;

	}
	dest[i] = '\0';

	return (dest);
}
