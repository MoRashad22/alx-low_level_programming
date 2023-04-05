#include "main.h"

/**
 * print_chessboard - function that prints a chessboard.
 * @a: for rows
 * Retrun: none
 */
void print_chessboard(char (*a)[8])
{
	int liv, leo;

	for (liv = 0; liv < 8; liv++)
	{
		for (leo = 0; leo < 8; leo++)
		{
			_putchar (a[liv][leo]);
		}
		_putchar('\n');
	}
}
