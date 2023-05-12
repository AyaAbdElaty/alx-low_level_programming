#include "main.h"
/**
 *
 */
void _print_rev_recursion(char *s)
{
	int n, i;
	n = 0;

	while (s[n])
	{
		n--;
	}
	i = n--;
	_putchar(s[i++]);
	_print_rev_recursion((s - 1));
}
