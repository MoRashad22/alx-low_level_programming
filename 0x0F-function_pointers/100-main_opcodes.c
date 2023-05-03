#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing opcodes of its own
 * @argc: arguments' number
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *a = (char *)main;
	int z;

	if (argc != 2)
		printf("Error\n"), exit(1);
	z = atoi(argv[1]);
	if (z < 0)
		printf("Error\n"), exit(2);

	while (z--)
		printf("%02hhx%s", *a++, z ? " " : "\n");
	return (0);
}
