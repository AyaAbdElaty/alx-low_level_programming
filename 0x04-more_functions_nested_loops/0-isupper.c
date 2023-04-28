#include "main.h"
/**
 * _isupper - is the name of the function
 *
 * @c: is the parametar of the function
 * Description: the function is to check case sensitve of a character
 * Return: is used to return zero or one based on case sensitive
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
