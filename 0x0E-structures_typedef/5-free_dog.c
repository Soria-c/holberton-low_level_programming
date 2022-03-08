#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates and initializes a new instance of dog_t.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 * Return: address of new instance of dog_t.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
