#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct dog variable
 *
 * @d: pointer to the struct dog variable to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
