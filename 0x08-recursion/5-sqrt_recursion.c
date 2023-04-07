#include "main.h"

/**
 * _sqrt_recursion - detect natural square root
 * @n: int
 * @rot: square root
 * Return: int
 */
int square(int n, int tor);
int _sqrt_recursion(int n)
{
	return (found(n, 1));
}

/**
 * found - find square root
 * @n: int to find the square root
 * rot: square root
 * Return: int
 */

int found(int n, int rot)
{
	if (rot * rot == n)
		return (rot);
	else if (rot * rot < n)
		return (found(n, rot + 1));
	else
		return (-1);
}
