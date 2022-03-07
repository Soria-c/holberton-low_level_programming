#include "dog.h"
#include "stdlib.h"

/**
 * init_dog - initializes the struct in the address d.
 * @d: address of the struct.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
