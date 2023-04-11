#include <stdio.h>

/**
 * main - does print number of passed arguments into program
 * @argc: input
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int lee = 0

		while (argc--)
		{
			printf("%s\n", argv[lee]);
		}
	return (0);
}
