#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - does create new dog info
 * @name: the dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dot_t *dodger;

	if (!name || age < 0 || !owner)
		return (NULL);
	dodger = (dog_t *)malloc(sizeof(dog_t));
	if (dodger == NULL)
		return (NULL);

	dodger->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dodger).name == NULL)
	{
		free(dodger);
		return (NULL);
	}

	dodger->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dodger).owner == NULL)
	{
		free(dodger->name);
		free(dodger);
		return(NULL);
	}
	_strcpy(dodger->name, name);
	dodger->age = age;
	_strcpy(dodger->owner, owner);

	return (dodger);
}

