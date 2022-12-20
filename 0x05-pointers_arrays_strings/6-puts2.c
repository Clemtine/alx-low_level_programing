#include "main.h"
#include <stdio.h>

/**
 * puts2 - my learning function
 * @str: string
 *
 * Return: 0
 */

void puts2(char *str)
{
	if (str == NULL)
	{
		return;
	}

	for (int i = 0; str[i] != '\0'; i += 2)
	{
		printf("%c\n", str[i]);
	}
}
