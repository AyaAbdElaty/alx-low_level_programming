#include "main.h"
/**
 * _strcat - is the name of the function
 *
 * @dest: is the function parameter
 * @src: is the function parameter
 * Description: function to concatinate
 * Return: is returning dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	dest[i] = dest[i] + src[i];
	while (dest[i])
	{
		_putchar(*(dest + i));
		i++;
	}
	return (dest);
}
