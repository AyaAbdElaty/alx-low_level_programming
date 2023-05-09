#include "main.h"
/**
 * _memset - is the name of the function
 * @s: is the parameter
 * @b: is a parameter
 * @n: is a parameter
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	s = &b;
	n = **s;
	int *p;

	p = &*s;
	*p = *s;
	return (s);
}
