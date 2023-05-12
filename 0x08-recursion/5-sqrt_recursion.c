#include "main.h"
/**
 * _sqrt_recursion - is the name of the function
 * @n: is the parameter of the function
 * Return: the result of square root
 */
int _sqrt_recursion(int n, int i)
{
	if (i*i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return _sqrt_recursion(n, i + 1);
}
