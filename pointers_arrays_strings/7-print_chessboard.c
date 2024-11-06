#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	int l, c;

	for (l = 0; l < 8; l++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[l][c]);
		}
	_putchar('\n');
	}
}
