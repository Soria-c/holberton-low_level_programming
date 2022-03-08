#include "dog.h"
#include <stdlib.h>

void strcpy1 (char *d, char *s, int i);
/**
 * new_dog - creates and initializes a new instance of dog_t.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 * Return: address of new instance of dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	int i, j;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	d->name = malloc(i + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy1(d->name, name, i);
	d->age = age;
	for (j = 0; owner[j] != '\0'; j++)
		;
	d->owner = malloc(j + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->owner);
		return (NULL);
	}
	strcpy1(d->owner, owner, j);
	return (d);
}

void strcpy1 (char *d, char *s, int i)
{	
	int j;

	for (j = 0; j < i; j++)
		d[j] = s[j];
	d[j] = '\0';
}
