#include <stdio.h>
#include "main.h"

/**
 * _strcpy - that copies the string pointed.
 * @dest: buffer.
 * @src: string.
 * return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest[i]);
}
