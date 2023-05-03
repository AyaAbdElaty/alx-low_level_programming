#include "main.h"
/**
 * rev_string- is used to reverse string
 *
 * @s: is the function parameter
 * return: nothing
 */
void rev_string(char *s)
{
	int i;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(*(s+i));
	}
}
