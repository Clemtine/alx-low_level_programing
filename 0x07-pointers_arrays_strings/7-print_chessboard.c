#include "main.h"

/**
 * print_chessboard - function prints chessboard
 * @a: input pointer
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int i, c;

	for (i = 0; i < 8; i++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[i][c]);
		}
		_putchar('\n');
	}
		
}
