#include <stdio.h>
#include "main.h"

/**
 * _puts - that prints a string, followed by a new line, to stdout.
 * @str: string.
 * return: nothing.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
