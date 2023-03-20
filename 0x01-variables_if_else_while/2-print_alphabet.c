#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphapet letters
 *
 * Return: 0 (succes)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
