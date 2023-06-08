#include "main.h"
/**
 * is_prime_number - the defination of the function
 * @n: is the parameter of the function
 */
int is_prime_number(int n)
{
	int i = 0;

	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11)
		return (1);
	if (n == ((6 * i) - 1))
	{
		return 1;
		is_prime_number((6 * (i + 1)) - 1);
	}
	if (n <= 0)
		return (-1);
}
