#include "main.h"
/**
 * _print_rev_recursion - is the name of the func
 * @s: is the parameter of the function
 */
void _print_rev_recursion(char *s)
{

	if (*s > '\0')
	{
		_print_rev_recursion((s + 1));
		_putchar(*s);
	}
}
