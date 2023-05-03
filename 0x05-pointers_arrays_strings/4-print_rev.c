#include "main.h"
/**
 * print_rev - is the name of the function
 *
 * @s: is the parameter of the function
 * description: print characters in reverse
 */

void print_rev(char *s)
{
	int i =0;

	while(s[i])
	{
		i++;
	}
	for (i; i >= 0; i--)
	{
		_putchar(*(s+i));
	}
	_putchar('\n');
}
