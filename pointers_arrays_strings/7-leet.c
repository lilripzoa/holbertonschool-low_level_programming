#include <stdio.h>
#include "main.h"

/**
 * leet -  function that encodes a string into 1337.
 * @a: letters.
 * Return: string.
 */

char *leet(char *a)
{
	int i, x;
	char *l = "aeotlAEOTL";
	char *c = "4307143071";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; l[x] != '\0'; x++)
		{
			if (a[i] == l[x])
			{
				a[i] = c[x];
				break;
			}
		}
	}

	return (a);
}
