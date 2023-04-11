#include <stdio.h>
#include <stdlib.h>

/**
 * main - positive only
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int total = 0;
	char *x;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
			if (*x < '0' || *x > '9')
				return (printf("Error\n"), 1);
		total += atoi(argv[argc]);
	}
	printf("%d\n", total);
	return (0);
}
