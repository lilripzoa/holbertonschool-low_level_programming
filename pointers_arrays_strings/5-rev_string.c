#include <stdio.h>
#include "main.h"

/**
 * rev_string - that reverses a string.
 * @s : string.
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i, y;
	char a;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (y = 0; y < i / 2; y++)
	{
		a = s[y];
		s[y] = s[i - y - 1];
		s[i - y - 1] = a;
	}
}
