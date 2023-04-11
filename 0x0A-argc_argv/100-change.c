#include <stdio.h>
#include <stdlib.h>
/**
 * main - does print minimum number of coins to make change
 * @argc: command line arguments number
 * @argv: pointer to array
 * Return: 0 (success), otherwise (fail)
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x, minicents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (x = 0; x < 5; x++)
		{
			if (money >= cents[x])
			{
				minicents += money / cents[x];
				money = money % cents[x];
				if (money % cents[x] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", minicents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
