#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - that prints the alphabet ten times..
 *
 */

void print_alphabet_x10(void)
{
	char i;
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}

}
