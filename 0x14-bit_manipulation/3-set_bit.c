#include "main.h"

/**
 * set_bit - the bit value will be set to 1
 * @n: pointer
 * @index: index
 *
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);

	return (1);
}
