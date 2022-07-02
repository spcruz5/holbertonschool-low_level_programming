#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - funct free dog
 * @d: ptr
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
