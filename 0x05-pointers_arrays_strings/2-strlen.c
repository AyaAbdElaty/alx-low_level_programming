#include "main.h"
 /**
  * _strlen - is to find the lenth of a string
  *
  * @s: is the parametar of the function
  * description: the function is know the length of the character
  * return: length of string
  */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
