#include <stdio.h>
#include "main.h"

/**
 * print_sign - sign of a number.
 * @n: check the sign of a number
 * Return: 1 if n is greater than 0, 0 if 0 and -1 if less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('\53');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('\55');
		return (-1);
	}

}
