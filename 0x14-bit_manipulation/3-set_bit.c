#include "main.h"

/**
 * set_bit - setting bit at index
 * @n: number to index
 * @index: bit to be set
 *
 * Return: 1 when successful otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
