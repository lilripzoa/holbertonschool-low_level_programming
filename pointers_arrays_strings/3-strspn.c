#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: bytes.
 * Return: the number of bytes in the initial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x;
	unsigned int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				c++;
				break;
			}
		}
		if (accept[x] == '\0')
		{
			break;
		}
	}
	return (c);
}
