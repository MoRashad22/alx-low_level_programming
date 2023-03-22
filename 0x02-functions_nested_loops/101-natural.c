#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all
 *		the multiplies of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	primtf("%d\n", sum);

	return (0);
}
