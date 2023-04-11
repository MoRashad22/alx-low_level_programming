#include <stdio.h>

/**
 * main - prints the number of passed arguments.
 * @argc: num of commanline arguments.
 * @argv: pointer to array of command line arguments.
 * Return: 0 (success), otherwise (fail)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
