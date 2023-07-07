#include "main.h"

/**
 * get_bit - geting bit at indx
 * @n: number to index
 * @index: bit to be got
 *
 * Return: bit state or -1 when error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
