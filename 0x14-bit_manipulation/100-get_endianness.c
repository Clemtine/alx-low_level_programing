#include "main.h"

/**
 * get_endianness - checks
 *
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int byte;
	char *c;

	byte = 1;
	c = (char *) &byte;

	return ((int)*c);
}
