#include "main.h"

/**
 * array_range - does create an array of integrs
 * @min: int
 * @max: int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int lee, i;
	int *x;

	if (min > max)
		return (NULL);
	lee = max - min + 1;
	x = malloc(sizeof(int) * lee);
	if (!x)
		return (NULL);
	for (i = 0; i < lee; i++)
		x[i] = min++;
	return (x);
}
