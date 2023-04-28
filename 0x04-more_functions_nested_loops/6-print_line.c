#include "main.h"
/**
 * print_line - is to draw a line
 *
 * @n : is the function parameter
 */

void print_line(int n)
{
	int m = 0;

	while (m <= n)
	{
		-putchar(45);
		m++;
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
