#include "main.h"
 /**
  * _strlen - is the name of the function
  *  @s: is the parametar of the function
  * Description : the function is know the length of the character
  */

int _strlen(char *s)
{
	int n = 0;
	int m;

	while (s[n] != '\0')
	{
		n++;
		s++;
		m = n -1;
	}
	_putchar(m);
	return (n);
}
