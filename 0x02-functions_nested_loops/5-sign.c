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
		return (1);
		_putchar('+');
	}
	else if ((n == 48))
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
