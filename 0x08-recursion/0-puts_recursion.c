#include "main.h"
/**
 * _puts_recursion -  is the name of the function
 * @s: is parameter of the function
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar('\n');
	_putchar(s[i]);
	_puts_recursion((s + 1));
}
