#include "main.h"

/**
 * get_endianness - returning endianness of system
 *
 * Return: 0 for big endian, 1 for small
 */
int get_endianness(void)
{
	unsigned long int x = 1;

	return (*(char *)&x);
}
