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

	for (d = 0; d <= 2; d++)
	{
		if (d == 2)
		{
			for (c = 0; c <= 3; c++)
			{
				for (b = 0; b <= 5; b++)
                                {
					for (a = 0; a <= 9; a++)
					{
						_putchar(d + 48);
						_putchar(c + 48);
						_putchar(':');
						_putchar(b + 48);
						_putchar(a + 48);
						_putchar('\n');
					}
				}
			}
		}
		else
		{	
			for (c = 0; c <= 9; c++)
			{
				for (b = 0; b <= 5; b++)
				{
					for (a = 0; a <= 9; a++)
					{
						_putchar(d + 48);
						_putchar(c + 48);
						_putchar(':');
						_putchar(b + 48);
						_putchar(a + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
