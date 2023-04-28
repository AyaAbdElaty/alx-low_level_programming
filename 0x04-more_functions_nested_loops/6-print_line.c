#include "main.h"
/**
 * print_line - is to draw a line
 *
 * @n : is the function parameter
 */

void print_line(int n)
{
	int m = 0;

	if (n <= 0)
		_putchar('\n');
	while (m < n)
	{
		-putchar(45);
		m++;
	}
	_putchar('\n');
}
