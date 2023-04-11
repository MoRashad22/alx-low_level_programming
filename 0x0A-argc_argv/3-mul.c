#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of two numbers
 * @argc: number of commandline arguments.
 * @argv: pointer to array in command line arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int lea;

	if (argc == 3)
	{
		lea = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", lea);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
