#include "main.h"

/**
 * flip_bits - return number of bits need to be flipped
 *
 * @n: first number
 * @m: second number
 *
 * Return: bits number to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int sum = 0;

	while (flip)
	{
		if (flip & 1ul)
			sum++;
		flip = flip >> 1;
	}
	return (sum);
}
