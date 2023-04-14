#include "main.h"

/**
 * *malloc_checked - does allocate the memory using malloc and exit if failed
 * @b: int
 * Return: pointer to array initialized
 */

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);

	return (x);
}
