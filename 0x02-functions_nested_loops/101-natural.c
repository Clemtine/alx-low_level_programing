#include <stdio.h>
#include <stdlib.h>
/**
 * main - learning
 *
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int s = 0;
	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			s += c;
		}
		c++;
	}
	printf("%i\n", s);
	return (0);
}
