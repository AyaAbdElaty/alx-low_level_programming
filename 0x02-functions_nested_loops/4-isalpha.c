#include "main.h"
/**
 * _isalpha - is the name of the function
 *
 * @c: is the parameter of the function
 * Return: return 1 if letter and 0 if other
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122 ) || (c >= 65 && c <= 90))
		return (1);
	else
		return(0);
}
