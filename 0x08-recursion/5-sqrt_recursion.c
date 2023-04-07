#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input to calculate its square root
 *
 * Return: the square root reault
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n, 0));
}

/**
 * iamroot - recurses that find natural
 * square root of a number
 * @leo: number to calculate its sqaure root
 * @eve: int
 *
 * Return: the result
 */
int iamroot(int leo, int eve)
{
	if (leo * leo > eve)
		return (-1);
	if (leo * leo == eve)
		return (leo);
	return (iamroot(leo, eve + 1));
}
