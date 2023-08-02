#include "main.h"
/**
 * _strlen_recursion - is the name of the funct
 * @s: is the parameter of the function
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
