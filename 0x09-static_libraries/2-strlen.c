#include "main.h"
/**
 * _strlen - is to find the lenth of a string
 *
 * @s: is the parametar of the function
 * Description: the function is know the length of the character
 * Return: length of string
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
