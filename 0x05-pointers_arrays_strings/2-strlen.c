#include "main.h"
 /**
  * _strlen - is the name of the function
  * @s: is the parametar of the function
  * description: the function is know the length of the character
  */

int _strlen(char *s)
{
	int n;

	while (*s != '\0')
		s++;
		n++;
	_putchar(n);
	return (n);
}
