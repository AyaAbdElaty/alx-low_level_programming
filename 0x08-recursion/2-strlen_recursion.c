#include "main.h"
/**
 * _strlen_recursion - is the name of the function
 * @s: is the parameter of the function
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	return (i);
	_strlen_recursion(s + 1);
}
