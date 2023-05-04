#include "main.h"
/**
 * _strcat - is the name of the function
 *
 * @dest: is the function parameter
 * @src: is the function parameter
 * description: function to concatinate
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++;
	}
	_putchar(' ');
	while (src[j] != '\0')
	{
		_putchar(src[j]);
		j++;
	}
	_putchar('\0');
}
