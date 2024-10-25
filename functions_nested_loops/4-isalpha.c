#include <stdio.h>
#include "main.h"

/**
 * _asalpha - checks for alphabetic characters.
 *
 * @c: checks characters
 *
 * Return: 1 if c is a letter,lowcase or uppercase else 0
 */

int  _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
