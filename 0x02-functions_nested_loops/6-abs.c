#include "main.h"
/**
 * _abs- is the function name
 * Return: the value of int
 */
int _abs(int a)
{
	if (a < 0)
	{
		a =( a * -1);
		_putchar(a);
	}
	return(a);
}
