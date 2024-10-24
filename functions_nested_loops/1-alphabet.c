#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * the function pint_alphabet prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */


void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

}
