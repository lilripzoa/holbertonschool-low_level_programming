#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function that returns 1 if it's a prime number.
 * @n: integer
 * Return: 1 if prime number otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}

/**
 * is_prime - function to check if a number is prime.
 * @n: number to test.
 * @i: The current divisor to test.
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime(n, i + 1));
}
