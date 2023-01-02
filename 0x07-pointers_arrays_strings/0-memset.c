#include "main.h"
i
/**
 * _memset - a function
 * @s: memory area
 * @b: constant byte
 * @n:  bytes to be filled
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *point = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (point);
}
