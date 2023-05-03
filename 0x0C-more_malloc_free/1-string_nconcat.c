#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string pointer.
 * @s2: second string pointer
 * @n: number of bytes from n2 to concatenate.
 *
 * Return: pointer to space in memory containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int a = 0, b = 0, leng1 = 0, leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;

	while (s2 && s2[leng2])
		leng2++;

	if (n < leng2)
		str = malloc(sizeof(char) * (leng1 + n + 1));
	else
		str = malloc(sizeof(char) * (leng1 + leng2 + 1));

	if (!str)
		return (NULL);
	while (a < leng1)
	{
		str[a] = s1[a];
		a++;
	}
	while (n < leng2 && a < (leng1 + n))
		str[a++] = s2[b++];

	while (n >= leng2 && a < (leng1 + leng2))
		str[a++] = s2[b++];
	str[a] = '\0';
	return (str);
}
