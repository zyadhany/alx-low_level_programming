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

	if (!x->name || !p->owner)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		p->name[k] = name[k];
	}
	p->name[k] = '\0';
	for (k = 0; k < j; k++)
	{
		p->owner[k] = owner[k];
	}
	p->owner[k] = '\0';

	p->age = age;

	return (p);
}
