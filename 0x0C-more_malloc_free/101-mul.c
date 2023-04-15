#include "main.h"

/**
 * _puts: used for printing a string followed by new line
 * @str: pointer
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
}

/**
 * _atoi - converts string to integer.
 * @s: string
 * Return: integer converted
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int rslt = 0, num1, i;

	for (i = num1; s[i] >= 48 && s[i] <= 57; i++)
	{
	rslt *= 10;
	rslt += (s[i] - 48);
	}

	return (sign * rslt);
}

/**
 * print_int - print integer
 * @n: input
 * Return: 0
 */

void print_int(unsigned long int n)
{

	unsigned long int divisor, divisor = 10
	{
		rslt = n / divisor;
		_putchar('0' + rslt);
	}
}

/**
 * main - print multiplication result, followed by new line
 * @argc: input
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
