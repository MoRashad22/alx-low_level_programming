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
	unsigned int i = 0, j = 0, leng1= 0, leng2 = 0;

	/*check if strings passed strings are NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";
	/*compute strings length*/

	for (leng1 = 0; s1[leng1] != '\0'; leng1++)
		;
	for (leng2 = 0; s2[leng2] != '\0'; leng2++)
		;

	/*memory reservation-for case 1 & 2*/
	str = malloc(leng1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second string into str*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
