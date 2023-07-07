#include "main.h"

/**
 * print_binary - printing number as binary string
 * @n: number supposed to be printed
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, result = 0;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			printed++;
		}
		else if (result)
			_putchar('0');
	}
	if (!result)
		_putchar('0');
}
