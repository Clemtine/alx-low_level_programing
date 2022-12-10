# include <stdio.h>
/**
 * main -my learning program c
 * Return: 0
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123 && i != 'e' && i != 'q')
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
