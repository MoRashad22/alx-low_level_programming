#include "main.h"

/**
 * _strpbrk - searches string for set of bytes
 * @s: input
 * @accept: string to match
 * Return: pointer to the matching bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int liv, leo;
	char *x;

	liv = 0;
	while (s[liv] != '\0')
	{
		leo = 0;
		while (accept[leo] != '\0')
		{
			if (accept[leo] == s[liv])
			{
				x = &s[liv];
				return (x);
			}
			leo++;
		}
		liv++;
	}

	return (0);
}
