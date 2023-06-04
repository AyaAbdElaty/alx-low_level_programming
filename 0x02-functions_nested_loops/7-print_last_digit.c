#include "main.h"
/**
 * print_last_digit - is the function name
 * @a: is the function parameter
 * Return: is to return the result
 */
int print_last_digit(int a)
{
	if (a >= 0)
	{
		a = a % 10;
	}
	else
	{
		a *= -1;
		a = a % 10;
	}
	_putchar(a + '0');
	return (a);
}
