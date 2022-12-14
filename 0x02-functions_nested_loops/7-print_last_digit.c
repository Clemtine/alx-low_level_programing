#include "main.h"
/**
 * print_last_digit - learning
 * @i: number check last digit
 * Return: 1
 */

int print_last_digit(int i)
{
	int c;

	if (i < 0)
		i = -i;
	c = i % 10;
	if (c < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}
