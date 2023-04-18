#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - the new one
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return NULL;
	}
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return NULL;
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return NULL;
	}
	strcpy(d->owner, owner);
	return (d);
}
