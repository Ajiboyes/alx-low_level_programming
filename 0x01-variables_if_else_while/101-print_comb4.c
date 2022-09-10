#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, b, a;

	i = 48;
	b = 48;
	a = 48;

	while (b < 58)
	{
		i = 48;
		while (i < 58)
		{
			a = 48;
			while (a < 58)
			{
				if (b != i && b != a && i != a && b < i && i < a)
				{
					putchar(b);
					putchar(i);
					putchar(a);
					if (i == 56 && b == 55 && a == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			i++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
