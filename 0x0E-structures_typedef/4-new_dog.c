#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - gets string's length
 *
 * @str: string to get length
 *
 * Return: @str length
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - take a copy from @src to @dest
 *
 * @src: string to copy
 * @dest: destination
 *
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - does create new dog info
 * @name: the dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Retrun: pointer to the new dog
 * 	NULL when fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dodger;

	if (!name || age < 0 || !owner)
		return (NULL);

	dodger = (dog_t *) malloc(sizeof(dog_t));
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
		return (NULL);
	}

	dodger->name = _strcopy(dodger->name, name);
	dodger->age = age;
	dodger->owner = _strcopy(dodger->owner, owner);

	return (dodger);
}
