#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number.
 * Return: is n is lower than 0 he should return -1, if 0 then 1
 */

int factorial(int n)
{
	int i, f = 1;

	if (n < 0)
	{
		return (-1);
	}

	for (i = 1; i <= n; i++)
	{
		f = f * i;

	}
	return (f);
}
