#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: checks the function.
 * Return: 0;
 */

void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
