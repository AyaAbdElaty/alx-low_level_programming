#include "main.h"
/**
 * print_last_digit - is the function name
 * @a: is the function parameter
 * Return: is to return the result
 */
int print_last_digit(int a)
{
	int b;

	if (a > 0)
	{
		b = a % 10;
		_putchar(b + 48);
		return (b);
	}
	else
	{
		b = ((-1 * a) % 10);
		_putchar(b +  48);
		return (b);
	}
}
