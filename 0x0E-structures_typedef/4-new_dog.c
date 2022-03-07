#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates and initializes a new instance of dog_t.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 * Return: address of new instance of dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;

	d = malloc(sizeof(dog_t));
	d->name = calloc(1, 1);
	d->owner = calloc(1, 1);
	if (d == NULL || d->name == NULL || d->owner == NULL)
		return (NULL);
	for (i = 0; *(name + i) != '\0'; i++)
	{
		d->name = realloc(d->name, 2 + i);
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	d->age = age;
	for (i = 0; *(owner + i) != '\0'; i++)
	{
		d->owner = realloc(d->owner, 2 + i);
		d->owner[i] = owner[i];
	}
	d->owner[i] = '\0';
	return (d);
}
