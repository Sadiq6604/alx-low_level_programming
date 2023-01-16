#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializing variable type struct dog
 * @d: pointer to struct dorg to initillize
 * @age: age to initialiize
 * @name: owner to initialiize
 * @owner: owner initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
