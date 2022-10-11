#include "dog.h"
#include <stdlib.h>

/**
 * int_dog - initialize a variale of type struct dog.
 * @d: The dog to be initialized
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Name of dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
