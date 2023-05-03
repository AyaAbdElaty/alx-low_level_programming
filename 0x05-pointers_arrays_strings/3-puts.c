#include "main.h"
/**
 * _puts - the name of the function
 * @str: the parameter of the function
 * describtion: the function is to print new line
 */

void _puts(char *str)
{
	int i;
	i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		++i;
		++str;
	}
	_putchar('\n');
	++i;
}
