#include "main.h"
/**
 * print_rev - is the name of the function
 * @s: is the parameter of the function
 * description: print characters in reverse
 */

void print_rev(char *s)
{
	int n = _strlen(s);
	for (int i = n; i >= 0; i--)
	{
		_putchar(*(s+i));
	}

}
