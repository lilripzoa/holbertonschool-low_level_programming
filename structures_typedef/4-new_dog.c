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
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = (name != NULL) ? strdup(name) : NULL;

	new_dog->owner = (owner != NULL) ? strdup(owner) : NULL;

	new_dog->age = age;

	if ((name != NULL && new_dog->name == NULL) ||
		(owner != NULL && new_dog->owner == NULL))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
