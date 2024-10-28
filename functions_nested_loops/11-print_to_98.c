#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers.
 * @n: print from n to 98.
 * return: 0.
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d", n--);
			printf("%d", n);
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d", n++);
			printf("%d", n);
		}
	}
}
