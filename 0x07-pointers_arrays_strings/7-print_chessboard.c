#include "main.h"

/**
 * print_chessboard - function prints chessboard
 * @a: input pointer
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, c = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			c = i;
			_putchar('\n');
		}
		putchar(a[i / 8][i - c]);
	}
	_putchar('\n');
}