#include <stdlib.h>
#include "main.h"

/**
 * count_word - helping in counting string's words number
 * @s: the string to be tested
 *
 * Return: number of words
 * made afternoon
 */

int count_word(char *s)
{
	int flag, x, y;

	flag = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}
	return (y);
}

/**
 * **strtow - splits a string into words
 * @str: splited string
 *
 * Return: pointer to array of strings (Success)
 * , NULL (Failed)
 */
char **strtow(char *str)
{
	char **model, *mod;
	int a, b = 0, length = 0, w, l = 0, s, e;

	while (*(str + length))
		length++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	model = (char **) malloc(sizeof(char *) * (w + 1));
	if (model == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (l)
			{
				e = a;
				mod = (char *) malloc(sizeof(char) * (l + 1));
				if (mod == NULL)
					return (NULL);
				while (s < e)
					*mod++ = str[s++];
				*mod = '\0';
				model[b] = mod - l;
				b++;
				l = 0;
			}
		}
		else if (l++ == 0)
			s = a;
	}

	model[b] = NULL;

	return (model);
}
