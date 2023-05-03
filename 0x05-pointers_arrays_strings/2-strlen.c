#include "main.h"
 /**
  * _isupper - is the name of the function
  * @s: is the parametar of the function
  * Description: the function is know the length of the character
  */

int _strlen(char *s)
{
	int n;

	for (n = 0; *(s + n) != '\0'; n++);
	return (n);
}
