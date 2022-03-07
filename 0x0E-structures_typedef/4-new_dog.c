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
	char *n, *o;

	n = name;
	o = owner;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
