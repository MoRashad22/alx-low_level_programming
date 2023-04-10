#include "main.h"

/**
 * end_index - shows last index of string
 * @s: pointer to string
 * Return: int
 */
int is_palindrome(char *s);
int checker(char *s, int a, int b, int mod);
int end_index(char *s)
{
	int n = 0;

	if (*s > '\0')

		n += end_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to check
 * Return: 0 if not a palindrome, 1 if s is palindrome
 */

int is_palindrome(char *s)
{
	int b = end_index(s);

	return (check(s, 0, b - 1, b % 2));
}

/**
 * check - detect the palindrome
 * @s: string
 * @a: left index
 * @b: right index
 * @mod: int
 * Return: 0 or 1
 */

int check(*s, int a, int b, int mod)
{
	if ((a == b && mod != 0) || (a == b + 1 && mod == 0))
		return (1);
	else if (s[a] != s[b])
		return (0);
	else
		return (check(s, a + 1, b - 1, mod));
}
