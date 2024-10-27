#include <stdio.h>
#include "main.h"

/**
 * times_table - prints table.
 * Return: always 0.
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c >= 10)
				_putchar(c / 10 + '0');
			else 
				_putchar(' ');
			_putchar(c % 10 + '0');

			if (b < 9)
			{
				_putchar(',');

				if (b <= 9)
				{
					_putchar('\40');
				}
			}
		}
		_putchar('\n');
	}
}
