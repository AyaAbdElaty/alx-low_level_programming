#include "main.h"
/**
 * print_line - is to draw a line
 *
 * @n : is the function parameter
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int m;

		for (m = 0; m <= n; m++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
