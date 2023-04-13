#include "main.h"

/**
 * _strlen - detect string length
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;

	return (size);
}

/**
 * *str_concat - function that concatenates two or more strings
 * @s1: input 1
 * @s2: input 2
 * Return: the concat
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, i;
	char *x;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	a = _strlen(s1);
	b = _strlen(s2);
	x = malloc((a + b) * sizeof(char) + 1);
	if (x == 0)
		return (0);
	for (i = 0; i <= a + b; i++)
	{
		if (i < a)
			x[i] = s1[i];
		else
			x[i] = s2[i - a];
	}
	x[i] = '\0';
	return (x);
}
