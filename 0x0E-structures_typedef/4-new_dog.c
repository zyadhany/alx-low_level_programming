#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - intery
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return dog*
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *x = malloc(sizeof(dog_t));

	if (!x)
	{
		return (NULL);
	}

	for (i = 0; name[i]; i++)
	;

	for (j = 0; owner[j]; j++)
	;

	x->name = malloc(i + 1);
	x->owner = malloc(j + 1);

	if (!x->name || !x->owner)
	{
		free(x->name);
		free(x->owner);
		free(x);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		x->name[k] = name[k];
	}
	x->name[k] = '\0';
	for (k = 0; k < j; k++)
	{
		x->owner[k] = owner[k];
	}
	x->owner[k] = '\0';

	x->age = age;

	return (x);
}
