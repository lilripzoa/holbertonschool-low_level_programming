#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural square root.
 * @n: square root.
 * Return: an integer.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recurs(n, 1));
}
/**
 * _sqrt_recurs - function to find natural square root
 * @n: number to find the square root.
 * @i: number to test.
 * Return: The square root or -1 if it doesnt have square root.
 */

int _sqrt_recurs(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_recurs(n, i + 1));

}
