#include "main.h"
/**
 * _strcmp - is the name of the function
 *
 * @s1: is the parameter of the function
 * @s2: is the variable of the function
 * Return: return strcmp
 */
int _strcmp(char *s1, char *s2)
{
	int re = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			re = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (re);
}
