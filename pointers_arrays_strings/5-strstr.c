#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string.
 * @needle: substring.
 * Return: a pointer or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, y;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[i + y] != needle[y])
			{
				break;
			}
		}
		if (needle[y] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
