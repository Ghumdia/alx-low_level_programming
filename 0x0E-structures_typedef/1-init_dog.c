#include <stdio.h>
#include "dog.h"

/**
 * init_dog - details about doggo
 * @d: struct dog
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
