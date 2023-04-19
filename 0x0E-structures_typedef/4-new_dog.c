#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - gets string's length
 *
 * @str: string to be looked at
 * Return: @str length
 */

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - take a copy from @src to @dest
 *
 * @src: string to copy
 * @dest: destination
 * */
