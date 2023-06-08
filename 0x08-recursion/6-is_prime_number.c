#include "main.h"
int the_prime(int n, int i);
/**
 * is_prime_number - the defination of the function
 * @n: is the parameter of the function
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (the_prime(n, n - 1));
}
/**
 * the_prime - the defination of the function
 * @n: is the parameter of the function
 */
int the_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (the_prime(n, i - 1));
}
