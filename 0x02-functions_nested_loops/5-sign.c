#include "main.h"
/**
 * print_sign - is the name of the function
 * @n: is the parameter
 * Return: return values depand on result
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 48)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
