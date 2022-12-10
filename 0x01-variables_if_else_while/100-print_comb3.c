# include <stdio.h>
/**
 * main - my learning
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int i;

	for (a = 45; a <= 56; a++)
	{
		for (i = a + 1; i <= 57; i++)
		{
			putchar(a);
			putchar(i);
			if (a != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
