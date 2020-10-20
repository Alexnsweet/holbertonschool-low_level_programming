#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initialize variable of type struct dog
 *
 * @d: dog struct
 * @name: dog name
 * @age: age of dog
 * @owner: dog owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{	return;	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
