#include "main.h"

/**
 * binary_to_uint - converting binary number to unsigned int
 * @b: binary number in string form
 *
 * Return: unsigned int form of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Nom = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		Nom = Nom * 2 + (*b++ - '0');
	}
	return (Nom);
}
