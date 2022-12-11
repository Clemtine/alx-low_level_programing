# include <stdio.h>
/**
 * main - my learning program
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int i, j;
	int b = 44;

	while (a <= 57)
	{
		i = a + 1;
		while (i <= 57)
		{
			j = i + 1;
			while (j <= 57)
			{
				putchar(a);
				putchar(i);
				putchar(j);
				if (a != 55 || i != 56 || j != 57)
				{
					putchar(b);
					putchar(32);
				}
				j++;
			}
			i++;
		}
		a++;
	}
	putchar('\n');
	return (0);
i}
