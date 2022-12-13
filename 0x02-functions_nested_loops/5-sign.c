#include "main.h"
/**
 * print_sign - learning
 * @n: num to be checked
 * Return: 1 if n is greater than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}

}
