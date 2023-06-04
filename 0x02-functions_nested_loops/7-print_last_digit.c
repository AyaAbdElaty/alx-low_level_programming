#include "main.h"
/**
 * print_last_digit - is the function name
 * @a: is the function parameter
 * Return: is to return the result
 */
int print_last_digit(int a)
{
	int lastDigit;

	if (a >= 0)
	{
		lastDigit = a % 10;
	}
	else
	{
		lastDigit = -1 * (a % 10);
		a = a % 10;
	}
	_putchar(a + '0');
	return (a);
}
