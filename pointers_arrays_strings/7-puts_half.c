#include <stdio.h>
#include "main.h"

/**
 * puts_half - that prints half of a string.
 * @str: string.
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int y;

	while (str[i] != '\0')
	{
		i++;
	}

	for (y = i / 2; y < i; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
