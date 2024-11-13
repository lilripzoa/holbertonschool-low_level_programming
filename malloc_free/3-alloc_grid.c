#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * @width: integer
 * @height: integer
 * Return: NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grille;
	int i, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grille = (int **)malloc(height * sizeof(int *));

	if (grille == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grille[i] = (int *)malloc(width * sizeof(int));

		if (grille[i] == NULL)
		{
			for (y = 0; y < i; y++)
			{
				free(grille[y]);
			}
			free(grille);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
		{
			grille[i][y] = 0;
		}
	}

	return (grille);

}
