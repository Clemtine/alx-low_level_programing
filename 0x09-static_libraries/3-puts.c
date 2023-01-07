#include "main.h"

/**
 * _puts - learning functions
 * @str: string
 *
 *
 * Return:1
 */
void _puts(char *str)
{
	int var = 0;

	while (str[var] != '\0')
	{
		_putchar(str[var]);
		var++;
	}
	_putchar('\n');
}
