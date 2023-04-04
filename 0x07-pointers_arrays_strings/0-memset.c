#include "main.h"

/**
 * *_memset - fills the memory with constant byte
 * @s: pointer made to put the constant
 * @b: constant
 * @n: maximum bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int liv;

	for (liv = 0; n > 0; liv++, n--)
	{
		s[liv] = b;
	}

	return (s);
}
