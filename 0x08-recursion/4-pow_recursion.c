#include "main.h"

/**
 * _pow_recursion - finds the value of a given number
 * rasied to the power of variable
 * @x: given number
 * @y: variable exposant
 * Return: pointer ot matching byte in `s`
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
