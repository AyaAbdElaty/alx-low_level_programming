#include "main.h"
/**
 * factorial - is the name of the function
 * @n: is the parameter of the function
 * Return: return the result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return(n * factorial (n - 1));
}
