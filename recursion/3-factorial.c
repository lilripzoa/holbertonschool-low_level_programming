#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number.
 * Return: is n is lower than 0 he should return -1, if 0 then 1
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
