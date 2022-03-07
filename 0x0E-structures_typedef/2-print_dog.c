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
		if ((*d).name[0] == '\0' || d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("%s\n", d->name);
		printf("%.5f\n", d->age);
		if ((*d).owner[0] == '\0' || d->owner == NULL)
			printf("OwNER: (nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
