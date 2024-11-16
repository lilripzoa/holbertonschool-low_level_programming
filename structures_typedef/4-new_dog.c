#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - initialize variable.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: pointer or null if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b;
	dog_t *toutou = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);

	a = strlen(name) + 1;
	b = strlen(owner) + 1;

	toutou = malloc(sizeof(dog_t));

	if (toutou == NULL)
		return (NULL);

	toutou->name = malloc(a * sizeof(char));

	if (toutou->name == NULL)
	{
		free(toutou);
		return (NULL);
	}

	strcpy(toutou->name, name);
	toutou->owner = malloc(b * sizeof(char));

	if (toutou->owner == NULL)
	{
		free(toutou->name);
		free(toutou);
		return (NULL);
	}

	strcpy(toutou->owner, owner);
	toutou->age = age;

	return (toutou);
}
