#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diagonals in square matrix.
 * @a: 2d array
 * @size: the size of squared array
 */

void print_diagsums(int *a, int size)
{
	int liv, s1 = 0, s2 = 0;

	for (liv = 0; liv < size; liv++)
	{
		s1 += a[liv];
		s2 += a[size - liv - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
