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
	int a, b, i;
	dog_t *toutou;

	a = b = 0;
	while (name[a++])
		;
	while (owner[b++])
		;
	toutou = malloc(sizeof(dog_t));
	if (toutou == NULL)
		return (NULL);

	toutou->name = malloc(a * sizeof(toutou->name));
	if (toutou == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		toutou->name[i] = name[i];

	toutou->age = age;

	toutou->owner = malloc(b * sizeof(toutou->owner));
	if (toutou == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
		toutou->owner[i] = owner[i];
	return (toutou);
}
