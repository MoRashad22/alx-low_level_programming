#include "3-calc.h"
/**
 * main - checking code for Holberton school students followed by new line
 * @argc: argument numbers
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int (*check)(int, int), x, y;

	if (argc != 4)
		printf("Error\n"), exit(98);

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	check = get_op_func(argv[2]);
	if (!check)
		printf("Error\n"), exit(99);

	if (!y && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", check(x, y));
	return (0);
}
