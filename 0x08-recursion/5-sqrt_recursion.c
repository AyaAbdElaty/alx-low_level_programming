#include "main.h"
/**
 * _sqrt_recursion - is the name of the function
 * @n: is the parameter of the function
 * Return: the result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}

/**
 * square - is the name of the function
 * @n: is the parameter of the function
 * @i: is the parametet of the function
 * Return: the result of square root
 */


int square(int n, int i)
{
	if (i*i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (square(n, i+ 1));
}
