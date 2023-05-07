#include "main.h"
/**
 * _islower - is the name of the function
 * @c: is the function parameter
 * Return: 1 for lower 0 for upper
 */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
		return (1);
	else
		return (0);
}
