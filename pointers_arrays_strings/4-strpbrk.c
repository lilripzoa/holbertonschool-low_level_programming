#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string.
 * @accept: string.
 * Return: a pointer to the byte, null if no such byte found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, y;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[i] == accept[y])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
