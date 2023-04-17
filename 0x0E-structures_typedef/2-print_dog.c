#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog variable
 *
 * @d: pointer to the struct dog variable to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
