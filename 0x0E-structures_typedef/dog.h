#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog OWNER
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void i_dog(struct dog *, char *name, float age, char *owner);
void p_dog(struct dog *d);
typeof struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
