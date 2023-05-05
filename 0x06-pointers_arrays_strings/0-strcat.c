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
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j])
	{
		j++;
	}
	return (dest);
}
