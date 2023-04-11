#include "main.h"

/**
 * _strstr - function which locates a substring.
 * @haystack: pointer to the searched string
 * @needle: pointer to the search for substring
 * Return: pointer to first occurrence of needle in haystack
 * or NULL if needle is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}

