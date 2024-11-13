#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i, y;
	int longueur1 = (s1 != NULL) ? strlen(s1) : 0;
	int longueur2 = (s2 != NULL) ? strlen(s2) : 0;

	char *resultat = (char *)malloc((longueur1 + longueur2 + 1) * sizeof(char));

	if (resultat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < longueur1; i++)
	{
		resultat[i] = s1[i];
	}

	for (y = 0; y < longueur2; y++)
	{
		resultat[longueur1 + y] = s2[y];
	}

	resultat[longueur1 + longueur2] = '\0';

	return (resultat);
}
