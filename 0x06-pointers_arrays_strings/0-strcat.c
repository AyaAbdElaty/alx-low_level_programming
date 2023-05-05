#include "main.h"
/**
 * _strcat - is the name of the function
 *
 * @dest: is the function parameter
 * @src: is the function parameter
 * description: function to concatinate
 * Return: is returning dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	i = 0;

	dest[i] = dest[i] + src[i];
	while (i++)
	{
		_putchar(*(dest + i));
	}
	return (dest);
}
