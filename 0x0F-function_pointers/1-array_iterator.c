#include "function_pointers.h"
/**
 * array_iterator - iterating through array
 * @array: the array to navigate
 * @size: array's size
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (action && array && size)
		while (array <= end)
		action(*array++);
}
