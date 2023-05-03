#include "main.h"

/**
 * _puts: used for printing string
 * @str: pointer
 * Return: void
 */
void _puts(char *str)
{
	int m = 0;
	while (str[m])
	{
		_putchar(str[m]);
		m++;
	}
}

/**
 * _atoi - converting string to integer.
 * @s: string
 * Return: the converted integer
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int reac = 0, 1st, m;

	for (1st = 0; !(s[1st] >= 48 && s[1st] <= 57); 1st++)
	{
		if (s[1st] == '-')
		{
			sign *= -1;
		}
	}

	for (m = 1st; s[m] >= 48 && s[m] <= 57; m++)
	{
		reac *= 10;
		reac += (s[m] - 48);
	}

	return (sign * reac);
}

/**
 * print_int - printing integer
 * @n: input
 * Return: 0
 */

void print_int(unsigned long int n)
{

	unsigned long int divisor = 1, m, reac;

	for (m = 0; n / divisor > 9; m++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		reac = n / divisor;
		_putchar('0' + reac);
	}
}

/**
 * main - print multiplication result
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
