#include "main.h"
 /**
  * _strlen - is the name of the function
  *  @s: is the parametar of the function
  * Description : the function is know the length of the character
  */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
		s++;
	}
	_putchar(n);
	return (n);
}
