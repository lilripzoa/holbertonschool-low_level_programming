#include <stdio.h>
#include "main.h"

/**
 * _atoi - that convert a string to an integer.
 * @s: string.
 * Return: 0 if there are no numbers in the string.
 */

int _atoi(char *s)
{
	int i = 0;
	int y = 0;
	int x = 1;

	while (s[i] == ' ')
	{
		i++;
	}

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			x *= -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		y = y * 10 + (s[i] - '0');
		i++;
	}

	return y * x;
}
