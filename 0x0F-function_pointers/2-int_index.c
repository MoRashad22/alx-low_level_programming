#include "function_pointers.h"
/**
 * int_index - searching for integer
 * @array: array which contains elem
 * @size: elements number in array
 * @cmp: comparing function
 *
 * Return: int index or -1 (failed)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int arrow = 0;

	if (array && cmp && size)
		while (arrow < size)
		{
			if (cmp(array[arrow]))
				return (arrow);
			arrow++;
		}
	return (-1);
}
