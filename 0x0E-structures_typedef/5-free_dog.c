#include <stdio.h>
#include "dog.h"

/**
 * free_dog - intery
 * @d: dog
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
