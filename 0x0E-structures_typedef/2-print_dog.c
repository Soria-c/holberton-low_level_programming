#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the elements of the struct in address d.
 * @d: address of the struct.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	(d->name) == 0 ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	(d->owner) == 0 ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
