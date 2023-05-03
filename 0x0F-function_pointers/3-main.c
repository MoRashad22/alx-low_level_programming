#include "3-calc.h"
/**
 * main - checking code for Holberton school students followed by new line
 * @argc: argument numbers
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int (*checker)(int, int), 1st, 2nd;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	checker = get_op_func(argv[2]);
	if (!checker)
	{
		printf("Error\n"), exit(99);
	}

	1st = atoi(argv[1]);
	2nd = atoi(argv[3]);

	if (!2nd && (argv[2][0] == '/') || (argv[2][0] == '%'))
	{
		printf("Error\n"), exit(100);
	}
	printf("%d\n", checker(1st, 2nd));
	return (0);
}
