#include <stdio.h>
#include "main.h"

/**
 * _abs - calcule la valeur absolue d'un entier.
 * @c: l'entier dont on veut la valeur absolue.
 * Return: la valeur absolue de n.
 */

int _abs(int c)
{
	if (c < '0')
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
