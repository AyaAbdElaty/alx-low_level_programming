#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					if ((a + b) < (c + d) && a + b < 17)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(c + '0');
					putchar(d + '0');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
