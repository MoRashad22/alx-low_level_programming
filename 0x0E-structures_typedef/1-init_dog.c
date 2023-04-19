#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: the dog to initiate
 * @name: dog's name
 * @age: the dog's age
 * @owner: name of dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->named = name;
		d->age = age;
		d->owner = owner;
	}
}
