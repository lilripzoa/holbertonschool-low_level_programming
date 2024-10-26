#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: checks for the last digit
 * Return: always 0.
 */

int print_last_digit(int n)
{
	int y = n % 10;

	if (y <= 0)
	{
		y = -y;
		putchar(y + '0');
	}
	else
	{
		y = y;
		putchar(y);
	}
	putchar('\n');
	return (y);
}
