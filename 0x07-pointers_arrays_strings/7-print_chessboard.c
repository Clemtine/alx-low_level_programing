#include "main.h"

/**
 * print_chessboard - function prints chessboard
 * @a: input pointer
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int i, c = 0;

	for (i = 0; i < 64; i++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(*(*(i + a) + c));

		}
		putchar(a[i / 8][i - c]);
	}
	_putchar('\n');
}
