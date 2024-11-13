#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer.
 * @str: string.
 * Return: a pointer to the duplicated string, null if str = null
 */
char *_strdup(char *str)
{
	int i;
	int l = 0;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l] != '\0')
	{
		l++;
	}

	array = (char *)malloc((l + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		array[i] = str[i];
	}

	array[l] = '\0';

	return (array);

}
