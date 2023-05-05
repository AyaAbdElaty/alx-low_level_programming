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
	int i = -1;

	dest[i] = dest[i] + src[i];
	for (i = 0; dest[i] != '0'; i++)
		_putchar(*(dest + 1));
	return (dest);
}
