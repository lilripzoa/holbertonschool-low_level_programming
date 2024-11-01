#include <stdio.h>
#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1: string.
 * @s2: string.
 * Return: type int.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1 - s2);
}
