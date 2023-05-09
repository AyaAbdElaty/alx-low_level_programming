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
	int i = 0;

	while (n > 0)
	{
		i++;
		*s[i] = b;
		n--;
	}
	return(s);
}
