#include "main.h"
/*
 * _putchar - is the name of the function
 * @c: is the variable of the function
 * Return: return the result
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
