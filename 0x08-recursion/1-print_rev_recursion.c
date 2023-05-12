#include "main.h"
/**
 *
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	while(s[i])
	{
		i--;
	}

	if (i == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i--]);
	_print_rev_recursion((s - 1));
}
