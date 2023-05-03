#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenating all arguments of a program
 * @ac: to count
 * @av: pointer to ac
 * Return: concatenated arguments
 * made afternoon
 */
char *argstostr(int ac, char **av)
{
	int w, length, con, y;
	char *updt;

	if (ac == NULL || av == NULL)
		return (NULL);

	for (w = 0; w < ac; w++)

	length += strlen(av[w]) + 1;

	updt = (char *)malloc(length * sizeof(char));
	if (updt == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < ac; w++)
	{
		for (y = 0; av[w][y] != '\0'; y++)
		{
			updt[con] = av[w][y];
			_putchar('\n');
		}
		updt[con] = '\0';
		return (updt);
	}
}
