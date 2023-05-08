#include "main.h"
/**
 * jack_bauer - is the name of the function
 * Return: void
 *
 */
void jack_bauer(void)
{
	int a;
	int b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 1; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(':');
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar('\n');
				}
			}
		}
	}
}
