#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a var type struct dog
 * @d: ptr type
 * @name: ptr name
 * @age: age
 * @owner: ptr owner
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
