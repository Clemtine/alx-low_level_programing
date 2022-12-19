#include "main.h"

/**
 * swap_int - My swap function
 * @a: first value
 * @b: second value
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
