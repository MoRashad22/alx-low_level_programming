#include "main.h"

/**
 * _puts: used for printing a string followed by new line
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
	unsigned long int rslt = 0, num1, c;

	for (num1 = 0; !(s[num1] >= 48 && s[num1] <= 57); num1++)
	{
		if (s[num1] == '-')
		{
			sign *= -1;
		}
	}
	for (c = num1; s[c] >= 48 && s[i] <= 57; i++)
	{
		rslt *= 10;
		rslt += (s[c] - 48);
	}

	return (sign * rslt);
}

/**
 * print_int - printing integer
 * @n: input
 * Return: 0
 */

void print_int(unsigned long int n)
{

	unsigned long int divisor = 1, c, rslt;

	for (c = 0; n / divisor > 9; c++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
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
