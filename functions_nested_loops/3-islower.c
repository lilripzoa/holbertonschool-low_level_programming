#include <stdio.h>
#include "main.h"

/**
 * _islower - that checks for lowercase character.
 * @c: the characer to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);


}
