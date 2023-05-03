#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * larger_num - funding larger num
 * @n1: 1st number
 * @n2: 2nd number
 * Return: the larger number.
 */
int larger_num(char *n1, char *n2)
{
	int a1, a2;

	a1 = strlen(n1);
	a2 = strlen(n2);
	
	if (a1 > a2)
		return (1);
	else if (a1 < a2)
		return (2);

	else if ((*n1 == '\0') && (*n2 == '\0'))
	{
		return (1);
	}
	else if ((*n1 != '\0') && (*n2 != '\0'))
	{
		if (*n1 >= *n2)
			return (1);
		if (*n1 < *n2)
			return (2);
	}
	return ((larger_num(n1++, n2++)));
}
/**
 * is_number - finding number
 * @n: number1
 * Return: 1 ture or 0 (failed)
 */
int is_number(char *n)
{
	while (*n)
	{
		if (!((*n >= '0') && (*n <= '9')))
			return (0);
		n++;
	}
	return (1);
}
/**
 * mul_number - having the larger number
 * @n1: 1st number
 * @n2: 2nd number
 * Return: larger number.
 */
char *mul_number(char *n1, char *n2)
{
	char **k;

	(void) v;
	(void) n1;
	(void) n2;
	return (NULL);
}
/**
 * main - multiplying two numbers 
 * @argc: counter of argument
 * @argv: argument vector
 * Return: 0 (success) or 1 (failed)
 */
int main(int argc, char *argv[])
{
	int greater, thenum;
	char *sum;

	(void) sum;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	thenum = is_number(argv[1]) +  is_number(argv[1]);
	if (thenum != 2)
	{
		printf("Error\n");
		exit(98);
	}
	greater = larger_num(argv[1], argv[2]);

	if (greater == 1)
		sum = mul_number(argv[1], argv[2]);
	else
		sum = mul_number(argv[2], argv[1]);

	printf("%lu\n", (atol(argv[1]) * atol(argv[2])));
	return (0);
}
