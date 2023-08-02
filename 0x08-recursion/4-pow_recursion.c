#include "main.h"
/**
 * _pow_recursion - is the name of the funct
 * @x: is the parameter of the function
 * @y: is the parameter of the function
 * Return: return the result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
