#include <stdio.h>
#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase.
 * @a: change
 * Return: a string.
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32; /* de 'A' à 'a' ilf aut compter 32 caractères */
		}
	}
	return (a);

}
