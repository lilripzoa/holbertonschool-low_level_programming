#include <stdio.h>
#include "main.h"

/**
 * print_rev -  that prints a string, in reverse, followed by a new line.
 * @s: string.
 * return: nothing.
 */

void print_rev(char *s)
{
	int i, y;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	
	for (y = i - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
