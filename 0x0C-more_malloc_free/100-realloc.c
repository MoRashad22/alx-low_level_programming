#include "main.h"

/**
 * *_realloc - allocates a memory block using malloc and free
 * @ptr: previously allocated memory pointer
 * @old_size: size of allocated space for ptr
 * @new_size: size of the new memory block.
 *
 * Return: new array (success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *x;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		return (x);
	}
	if (new_size > old_size)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)x + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (x);
}
