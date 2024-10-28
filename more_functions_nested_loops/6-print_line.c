#include <stdio.h>
#include "main.h"

/**
 * print_line - that draws a straight line in the terminal.
 * @n: draws a straight.
 * Return: \n if n is 0 or less.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
