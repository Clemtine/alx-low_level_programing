#include <stdio.h>
/**
 * main - learning
 * Description: computer
 * Return: 0
 */

int main(void)
{
	int s = 0;
	int a = 0, b = 1, next = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			s += next;
	}
	printf("%i\n", sum);
	return (0);
}
