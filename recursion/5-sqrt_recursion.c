#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural square root.
 * @n: square root.
 * Return: an integer.
 */

int _sqrt_recursion(int n)
{
	int i = 1;
	int y = 0;

	if (n < 0)
	{
		i = 1;
		return (-1);
	}

	if (i * i > n)
	{
		i = 1;
		return (-1);
	}

	if (i * i == n)
	{
		y = i;
		i = 1;
		return (y);
	}

	i++;
	y = _sqrt_recursion(n);

	i = 1;

	return (y);

}
