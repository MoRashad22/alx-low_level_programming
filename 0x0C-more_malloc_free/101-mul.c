#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checking the string
 * @u: string to be checked
 *
 * Return: 0 if found non-digit, otherwise 1
 */
int is_digit(char *u)
{
	int o = 0;

	while (u[o])
	{
		if (u[o] < '0' || u[o] > '9')
			return (0);
		o++;
	}
	return (1);
}
/**
 * _strlen - does return string length
 * @u: string to be checked
 * Return: string length
 */
int _strlen(char *u)
{
	int v = 0;

	while (u[v] != '\0')
	{
		v++;
	}
	return (a);
}
/**
 * errors - handling errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplying two positive numbers
 * @argc: arguments number
 * @argv: arguments array
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *sum, k = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	sum = malloc(sizeof(int) * len);
	if (!sum)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		sum[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += sum[len1 + len2 + 1] + (digit1 * digit2);
			sum[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			sum[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (sum[i])
			k = 1;
		if (k)
			_putchar(sum[i] + '0');
	}
	if (!k)
		_putchar('0');
	_putchar('\n');
	free(sum);
	return (0);
}
