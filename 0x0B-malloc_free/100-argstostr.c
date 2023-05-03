#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - finds string's length
 * @s: the string
 * Return: int
 */
int _strlen(char *s)
{
	int v = 0;

	for (; s[v] != '\0'; v++)
		;
	return (v);
}

/**
 * argstostr - concatenating all arguments of a program
 * @ac: to count
 * @av: pointer to ac
 * Return: concatenated arguments
 * made afternoon
 */
char *argstostr(int ac, char **av)
{
	int w, lng, con, y;
	char *updt;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (; w < ac; w++, lng++)
		lng += _strlen(av[w]);

	updt = malloc(sizeof(char) * lng + 1);
	if (updt == 0)
		return (NULL);

	for (w = 0; w < ac; w++)
	{
		for (y = 0; av[w][y] != '\0'; y++, con++)
			updt[con] = av[w][y];

		updt[con] = '\n';
		con++;
	}
}
