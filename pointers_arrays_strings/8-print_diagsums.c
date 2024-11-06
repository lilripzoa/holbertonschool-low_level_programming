#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: integer
 * @size: integer.
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i * size + i];
		d += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", c, d);
}
