#include "main.h"
/**
 * jack_bauer - is the name of the function
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, d;

	for (d = 0; d <= 23; d++)
	{
		for (b = 0; b <= 5; b++)
		{
			for (a = 0; a <= 9; a++)
			{
				_putchar(d / 10 + 48);
				_putchar(d % 10 + 48);
				_putchar(':');
				_putchar(b + 48);
				_putchar(a + 48);
				_putchar('\n');
			}
		}
	}
}
