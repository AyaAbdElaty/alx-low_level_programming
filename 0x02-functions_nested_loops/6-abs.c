#include "main.h"
/**
 * _abs- is the function name
 * @a: is the parameter of the function
 * Return: the value of int
 */
int _abs(int a)
{
	if (a < 0)
	{
		a *= -1;
		_putchar(a);
	}
	return (a);
}
