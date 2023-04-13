#include "main.h"

/**
 * *_strdup - new memory space location duplicate
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int a = 0, size = 0;
	char *x;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
	x = malloc(size * sizeof(*str) + 1);

	if (x == 0)
		return (NULL);


	for (; a < size; a++)
		x[a] = str[a];

	return (x);
}
