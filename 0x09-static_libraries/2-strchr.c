#include "main.h"

/**
 * *_strchr - fills memory with constant byte
 * @s: the pointer
 * @c: input constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int liv;

	for (liv = 0; s[liv] >= '\0' ; liv++)
	{
		if (s[liv] == c)
		{
			return (&s[liv]);
		}
	}
	return ('\0');
}
