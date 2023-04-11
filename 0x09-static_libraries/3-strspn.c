#include "main.h"

/**
 * _strspn - function that shows prefix substring length.
 *
 * @s: the string
 * @accept: number of bytes.
 * Return: the unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int liv, leo;

	for (liv = 0; s[liv] != '\0'; liv++)
	{
		for (leo = 0; accept[leo] != s[liv]; leo++)
		{
			if (accept[leo] == '\0')
				return (liv);
		}
	}
	return (liv);
}
