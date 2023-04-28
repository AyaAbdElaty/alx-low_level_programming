#include "main.h"

/**
 * _isdigit - is the name of the function
 *
 * @c: is the parametar of the function
 * Description: the function is to check the digit of the function
 * Return: is used to retun one and zero based on the digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c<= 57)
		return (1);
	else
		return (0);
}
