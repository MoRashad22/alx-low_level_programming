#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks for prime numbers
 * @z: int
 * @n: int
 * Return: 1 or 0
 */
int prime_checker(int n, int z);
int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}
/**
 * prime_checker - checks if number is prime
 * @n: int
 * @z: int
 * Return: int
 */

int prime_checker(int n, int z)
{
	if (z >= n && n > 1)
		return (1);
	else if (n % z == 0 || n <= 1)
		return (0);
	else
		return (prime_checker(n, z + 1));
}
