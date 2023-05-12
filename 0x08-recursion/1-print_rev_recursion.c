#include "main.h"
/**
 *
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	_putchar(s[i++]);
	_print_rev_recursion((s - 1));
}
