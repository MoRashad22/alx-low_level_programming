#include "main.h"

/**
 * create_array - creating array of chars
 * and the initialize whis specific char.
 * @size: array size
 * @c: char to be initialized
 * Return: pointer to initialized arry or 0
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);

	while (size--)
		x[size] = c;
	return (x);
}
