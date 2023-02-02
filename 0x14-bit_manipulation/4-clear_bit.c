#include "main.h"

/**
 * clear_bit - bit value will be se to 0
 * @n: pointer
 * @index: index
 *
 * Return: 1 | -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clem;

	if (index > 63)
		return (-1);

	clem = 1 << index;

	if (*n & clem)
		*n ^= clem;

	return (1);
}
