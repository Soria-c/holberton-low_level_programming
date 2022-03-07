#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the elements of the struct in address d.
 * @d: address of the struct.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name) == NULL ? printf("Name: (nil)\n") : printf("%s\n", d->name);
		printf("%.5f\n", d->age);
		(d->owner) == NULL ? printf("Owner: (nil)\n") : printf("%s\n", d->owner);
	}
}
