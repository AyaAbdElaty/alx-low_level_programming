#include "main.h"

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * _sqrt_recursion - is the name of the function
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
